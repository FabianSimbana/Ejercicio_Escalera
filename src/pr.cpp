#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <iomanip>
#include "../lib/color.h"

using namespace std;
/*
gotoxy : es un metodo que se utiliza para mover el cursor de la consola a una posición específica.
@param x : es un numero entero que representa la coordenada horizontal en la consola.
@param y : es un numero entero que representa la coordenada vertical en la consola.
*/
void gotoxy(int x, int y)
{
        HANDLE hCon;
        hCon=GetStdHandle(STD_OUTPUT_HANDLE);
        /* Se declara una variable "HANDLE" llamada "hCon" y la inicializan con el valor devuelto por la función "GetStdHandle(STD_OUTPUT_HANDLE)". 
        Esta función devuelve un identificador de controlador de consola que se utiliza para controlar la salida estándar de la consola.*/
        COORD dwPos;
        dwPos.X=x;
        dwPos.Y=y;
        /* Declaran una variable "COORD" llamada "dwPos" y la inicializan con las coordenadas "x" e "y".
         "COORD" es una estructura que representa una ubicación en las coordenadas de la consola.*/
        SetConsoleCursorPosition(hCon,dwPos);
        /* Se llama a la función SetConsoleCursorPosition, pasando el identificador hCon y la estructura dwPos como parametros. 
        Esta función establece la posición del cursor en la ventana de la consola en las coordenadas especificadas (x e y) 
        moviendo el cursor a esa posición en la pantalla.*/
}
 
 /*
clase Snake : Solo representa el estado de una serpiente en el juego, es decir almacena datos relacionados con una serpiente, 
pero no define ningún comportamiento o acción que pueda realizar la serpiente. 
 */
class Snake
{
        public: /*se puede acceder a estas variables miembro y modificarlas desde fuera de la clase.*/
                int x,y; /*representan la posición de la serpiente en un espacio bidimensional.*/
                int dx,dy; /*representan la dirección del movimiento de la serpiente en el espacio bidimensional.*/
                char cuerpo; /*representa la apariencia del cuerpo de la serpiente.*/
};
 
/*
clase Fruta : representa un objeto de fruta con su información de ubicación y apariencia almacenada en sus miembros de datos.
*/
class Fruta
{
        public:
                int x,y; /*representan la posición de la comida en un espacio bidimensional.*/
                char cuerpo = 254; /*representa la apariencia de la fruta.*/
};

/*
clase Juego :  Define todo el juego, que utiliza una matriz para representar la serpiente y un objeto para representar la fruta. 
El juego tiene funciones para actualizar la posición de la serpiente, verificar si ha chocado y mostrar el puntaje del jugador. 
El usuario puede controlar la dirección de la serpiente utilizando las teclas del teclado.
*/
class Juego
{
        public:
                void main(); /*función principal del juego, que inicializa el juego y llama a la función loop() para comenzar a jugar. */
        private:
                int score,nivel,velocidad; /*almacena el puntaje del jugador, nivel actual del juego y velocidad del juego respectivamente*/
                Snake snake[100]; /*una matriz de 100 objetos de tipo Snake, que representan la serpiente en el juego.*/
                Fruta fruta; /*un objeto de tipo Fruta, que representa la fruta en el juego.*/
                int tam = 4; /*almacena el tamaño inicial de la serpiente.*/
                int c=21,f=64; /*almacena el ancho y alto del tablero de juego respectivamente.*/
                bool gameover=false; /*un valor booleano que indica si el juego ha terminado o no.*/
                void tablero(); /*procedimiento que dibuja el tablero de juego en la pantalla.*/
                void genFruta(); /*procedimeinto que genera una nueva fruta en una posición aleatoria en el tablero.*/
                void genSnake(); /*procedimiento que inicializa la serpiente en una posición inicial en el tablero.*/
                void loop(); /*procedimiento que contiene el bucle principal del juego, que se ejecuta continuamente hasta que el juego termina.*/
                void tecla(); /*procedimeinto que maneja la entrada del usuario (por ejemplo, las teclas del teclado) y actualiza la dirección de la serpiente en consecuencia.*/
                void actualizar(); /*procedimeinto que actualiza la posición de la serpiente en el tablero y verifica si ha chocado con una pared o con su propia cola.*/
                void imprimir(); /*procedimiento que que dibuja la serpiente y la fruta en el tablero.*/
                void cfruta(); /*procedimiento que verifica si la serpiente ha comido la fruta y, si es así, aumenta el puntaje y la longitud de la serpiente.*/
                void muerte(); /*procedimiento que se ejecuta cuando la serpiente muere (por ejemplo, choca con una pared o su propia cola) y muestra un mensaje de "game over".*/
                void puntos(); /*procediemiento que muestra el puntaje actual del jugador en la pantalla.*/
                void portada(); /*procedimiento que muestra la pantalla de inicio del juego.*/
                void portada2();
                void muerte2(); /*procedimiento que muestra un mensaje de "game over" y permite al usuario reiniciar el juego.*/
};

/*
Procedimiento : Juego::muerte2 : muestra una pantalla de Game Over con una animación y algunos detalles de puntuación y nivel. 
*/
void Juego::muerte2()
{
        system("cls");  // Limpia la pantalla de la consola
        int c = 24, f = 79, r; // Inicializa variables de columnas, filas y posición vertical
        char key;
        char t = 178; // Establece el carácter de borde de la pantalla
        setColor(34,34);
        for(int i=0 ; i<f ; i++) // Crea el borde superior e inferior de la pantalla
        {
                gotoxy(i,0); // Borde superior
                cout<<t;
                gotoxy(i,c); // Borde inferior
                cout<<t;
        }
        for(int i=0 ; i<=c ; i++) // Crea el borde izquierdo y derecho de la pantalla
        {
                gotoxy(0,i); // Borde izquierdo
                cout<<t;
                gotoxy(f,i); // Borde derecho
                cout<<t;
        }
        
        string g4meover[]={     "  ____                       ___",
                                " / ___| __ _ _ __ ___   ___ / _ \\__   _____ _ __ ",
                                "| |  _ / _` | '_ ` _ \\ / _ \\ | | \\ \\ / / _ \\ '__|",
                                "| |_| | (_| | | | | | |  __/ |_| |\\ V /  __/ | ",
                                " \\____|\\__,_|_| |_| |_|\\___|\\___/  \\_/ \\___|_|"};
        r=2;
        setColor(31,31);
        for(int i=0;i<5;i++) // Imprime la animación de Game Over
        {
                gotoxy(15,r);
                r++;
                cout<<g4meover[i]<<endl;
        }
        
        string g4meover2[]={    "   _________         _________",
                                "  /         \\       /         \\",
                                " /  /~~~~~\\  \\     /  /~~~~~\\  \\",
                                " |  |     |  |     |  |     |  |",
                                " |  |     |  |     |  |     |  |",
                                " |  |     |  |     |  |     |  |         /",
                                " |  |     |  |     |  |     |  |       //",
                                "(X  X)    \\  \\_____/  /     \\  \\_____/ /",
                                " \\__/      \\         /       \\        /",
                                "  |         ~~~~~~~~~         ~~~~~~~~",
                                "  ^"};
        setColor(33,33);
        for(int i=0;i<11;i++) // Imprime la animación de la Serpiente
        {
                gotoxy(20,r);
                cout<<g4meover2[i]<<endl;
                r++;
        }
        setColor(37,37);
        gotoxy(33,r);
        cout<<"Score: "<<score; // Presenta la puntuacion en la posicion definida anteriormente.
        r++; // Incrementa el valor de r una vez
        gotoxy(33,r);
        cout<<"Level: "<<nivel; // Presenta el valor del nivel en una piscion definida.

        gotoxy(8,23);
        cout<<"Presione ESC para salir o cualquier otra tecla para seguir jugando";
        key=getch(); // Esta declaración espera una entrada clave del usuario y almacena el código ASCII de la tecla presionada en la clave variable.
        if(key==27) // comprueba si el valor de key es igual al código ASCII de la tecla 'ESC'.
                exit(1); // finaliza el programa si el usuario presiona la tecla 'ESC' saliendo con un código de estado de 1.
}

/*
Procedimiento : Juego::portada : muestra una pantalla con el logo de un buho y el logo 
*/
void Juego::portada()
{
        system("cls"); // Limpia la pantalla de la consola
        int c = 24, f = 79, r; // Inicializa variables de columnas, filas y posición vertical respectivamente
        char t = 178; // // Establece el carácter de borde de la pantalla
        setColor(34,34);
        for(int i=0 ; i<f ; i++) // Crea el borde superior e inferior de la pantalla
        {
                gotoxy(i,0); // Borde superior
                cout<<t;
                gotoxy(i,c); // Borde inferior
                cout<<t;
        }
        for(int i=0 ; i<=c ; i++) // Crea el borde izquierdo y derecho de la pantalla
        {
                gotoxy(0,i); // Borde izquierdo 
                cout<<t;
                gotoxy(f,i); // Borde derecho
                cout<<t;
        }

        string snkd[]={ "OOOOO                         OOOOO",
                        "    OOOOO   OOOOOOOOOOOOO   OOOOO",
                        "     OOOOOO  OOOOOOOOOOO  OOOOOO",
                        "     OOOOOOO  OOOOOOOOO  OOOOOOO",
                        "    OOOOOOOO   OOOOOOO   OOOOOOOOO",
                        "   OO           OOOOO           OOO",
                        "  OO  OO    OOO  OOO  OOO    OO  OO",
                        "  O  OO  OOOOO O  O  O OOOOO  OO  O",
                        "  O  OO  OOOOO OO   OO OOOOO   O  O",
                        "  O   O   OOO  O     O  OOO   O   O",
                        "  OO   OO    OO       OO    OO   O",
                        "   OOO   OOOO  O     O  OOOO   OO",
                        "     OOOOOOOOOOO     OOOOOOOOOOO",
                        "               OO   OO",
                        "                OOOOO",
                        };
                
        r=2;
        setColor(33,33);
        for(int i=0;i<15;i++) // Imprime la animación de la serpiente
        {
                gotoxy(20,r);
                r++;
                cout<<snkd[i]<<endl;
        }
        
        string snkl[]={ "    ______   ___ __                  __     ",
                        "   /   o /  /  /__/ ____ ___  ____  / /_____",
                        "  /  ___/__/  /__ / ___/ __ \\/ __ `/ //_/ _ \\",
                        " /  /  o  /  /  /(__  ) / / / /_/ / ,< /  __/",
                        "/__/_____/__/__//____/_/ /_/\\__,_/_/|_|\\___/"};
        setColor(31,31);
        for(int i=0;i<5;i++) // Imprime la animación snake
        {
                gotoxy(18,r);
                r++;
                cout<<snkl[i]<<endl;
        }
        setColor(37,37);
        gotoxy(27,23);
        cout<<"Presione ENTER para empezar"; 
        system("pause>dsdsd"); // pausa la ejecución del programa hasta que se presiona una tecla y luego redirige la salida a un archivo llamado "dsdsd".
}

/*
Procedimiento : Juego::portada2 : muestra una pantalla de carga con la imagen de una serpiente 
*/
void Juego::portada2()
{
        system("cls"); // Limpia la pantalla de la consola
        int c = 24, f = 79, r; // Inicializa variables de columnas, filas y posición vertical respectivamente
        char t = 178; // // Establece el carácter de borde de la pantalla
        int total = 100;
        bool salir = false;
        int completed = 0;
        char simbolo = 178;
        while(!salir)
        {
                setColor(34,34);
                for(int i=0 ; i<f ; i++) // Crea el borde superior e inferior de la pantalla
                {
                        gotoxy(i,0); // Borde superior
                        cout<<t;
                        gotoxy(i,c); // Borde inferior
                        cout<<t;
                }
                for(int i=0 ; i<=c ; i++) // Crea el borde izquierdo y derecho de la pantalla
                {
                        gotoxy(0,i); // Borde izquierdo 
                        cout<<t;
                        gotoxy(f,i); // Borde derecho
                        cout<<t;
                }

                string snkd[]={ "       ---_ ......._-_--.",
                                "      (|\\ /      / /| \\  \\",
                                "      /  /     .'  -=-'   `.",
                                "     /  /    .'             )",
                                "   _/  /   .'        _.)   /",
                                "  / o   o        _.-' /  .'",
                                "  \\          _.-'    / .'*|",
                                "   \\______.-'//    .'.' \\*|",
                                "    \\|  \\ | //   .'.' _ |*|",
                                "     `   \\|//  .'.'_ _ _|*|",
                                "      .  .// .'.' | _ _ \\*|",
                                "      \\`-|\\_/ /    \\ _ _ \\*\\",
                                "                     \\ _ _ \\*",
                                "                      \\ _ _ \\ ",
                                "                       \\_"};

                r=3;
                setColor(33,33);
                for(int i=0;i<14;i++) // Imprime la animación de la serpiente
                {
                        gotoxy(23,r);
                        r++;
                        cout<<snkd[i]<<endl;
                }
                setColor(37,37);
                gotoxy(37,19);
                cout << "Cargando....";
                while (completed < total) 
                {   
                // Hacer trabajo aquí
                completed += 10;

                // Actualizar la barra de carga
                int progress = (completed * 100) / total;

                // Centrar la barra de carga
                gotoxy(15, 21);
                cout << setw(3) << progress << "%\t";

                // Definir la longitud de la barra de carga
                int barWidth = 40;

                // Calcular cuántos caracteres deben ser cargados
                int loadedChars = (completed * barWidth) / total;

                // Imprimir la barra de carga
                for (int i = 0; i < loadedChars; ++i) {
                    cout << simbolo;
                }
                for (int i = loadedChars; i < barWidth; ++i) {
                    cout << " ";
                }
                    Sleep(100); // Esperar un poco para dar tiempo a ver la barra de carga
                }
                salir = true;
                }

}

/*
Procedimiento Juego::puntos : muestra información importante sobre el juego, como el puntaje, el nivel y la longitud, 
en la pantalla en posiciones específicas utilizando la función "gotoxy".
*/
void Juego::puntos()
{
        gotoxy(f+2,2);
        cout<<"Score: "<<(score-1)*10; // Muestra el puntaje actual del juego
        gotoxy(f+2,4);
        cout<<"Level: "<<nivel; // Muestra el nivel actrual del juego
        gotoxy(f+2,6);
        cout<<"Length: "<<tam; // Muestra la longitud actual de la serpiente
}

/*
Procedimiento : Juego::tablero : Muestra el tablero de juego en el que se desarrolara toda la interaccion con la serpiente
*/
void Juego::tablero()
{
        //char t = '*';
        char t = 178;
        for(int i=1 ; i<f ; i++) // Crea el borde inferior y superior del tablero
        {
                gotoxy(i,1); //Borde superior
                cout<<t; 
                gotoxy(i,c); // Borde inferior
                cout<<t;
        }
        for(int i=1 ; i<=c ; i++) // Crea el borde izquiero y derecho del tablero
        {
                gotoxy(1,i); // Borde izquierdo
                cout<<t;
                gotoxy(f,i); // Borde derecho
                cout<<t;
        }
}

/*
Procedimiento : Juego::genFruta :  genera una fruta en una posición aleatoria dentro de la matriz de juego y la dibuja en la pantalla de la consola.
*/ 
void Juego::genFruta()
{
        
    setColor(31,31);
    fruta.x = 2+( rand() % (f-2) ); /*Asigna un valor aleatorio a la posición horizontal (x) de la fruta en el juego. rand() 
    devuelve un número entero pseudoaleatorio y % devuelve el resto de la división. El resultado final está en el rango de 2 a f-1, donde f es el ancho del juego.*/
    fruta.y = 2+(rand() % (c-2)); /*Asigna un valor aleatorio a la posición vertical (y) de la fruta en el juego. El resultado final está en el rango de 2 a c-1, 
    donde c es la altura del juego.*/
    gotoxy(fruta.x,fruta.y); /*Mueve el cursor de la consola a la posición donde se va a dibujar la fruta. gotoxy es una función que posiciona 
    el cursor de la consola en las coordenadas x e y.*/
    fruta.cuerpo = '*'; // Establece el carácter de la fruta
    cout << fruta.cuerpo; // Imprime el carácter de la fruta en la posición actual del cursor.
}

/*
Procedimiento : Juego::muerte : comprueba si la serpiente ha chocado con los límites de la cuadrícula o consigo misma, y establece la variable "gameover" en consecuencia.
*/
void Juego::muerte()
{
        if(snake[0].x==1 || snake[0].x==f || snake[0].y==1 || snake[0].y==c) // Verifica si la cabeza de la serpiente ha llegado a los limites de la cuadricula
                gameover = true; /* Si esto es cierto, se establece la variable booleana "gameover" como verdadera, lo que indica que el juego ha terminado.*/
        
        for(int i=1;i<tam && gameover==false;i++) // recorre todos los segmentos de la serpiente excepto su cabeza
        {
                if(snake[0].x==snake[i].x && snake[0].y==snake[i].y) // Verifica si la posición de la cabeza es igual a la posición de cualquier otro segmento de la serpiente
                        gameover = true; /* Si esto es cierto, se establece la variable booleana "gameover" como verdadera, lo que indica que el juego ha terminado.*/
        }
}
 
/*
Procedimiento : Juego::tecla : se encarga de leer la entrada de teclado del usuario y actualizar la dirección de la serpiente en función de la tecla pulsada, 
siempre y cuando el juego no haya terminado y la dirección no se actualice a una dirección opuesta a la actual.

*/
void Juego::tecla()
{
        int i;
        char key; //almacena la entrada de teclado del usuario.
    
        if (!gameover) /*Se comprueba si el juego ha terminado. Si el juego aún no ha terminado, se procede a comprobar si el usuario ha pulsado alguna tecla en el teclado.*/
        {
                if (kbhit()==1) /*La función "kbhit()" se utiliza para determinar si hay alguna entrada de teclado pendiente. Si el valor devuelto por "kbhit()" es 1, 
                significa que hay una entrada de teclado pendiente y se utiliza la función "getch()" para leer la entrada de teclado y almacenarla en la variable "key".*/
                {
                        key=getch();
        
                }
                if((key==72) && snake[0].dy !=1) // Direccion : Arriba
                {
                        snake[0].dx=0;
                        snake[0].dy=-1;
                }
                if((key==80) && snake[0].dy !=-1) // Direccion : Abajo
                {
                        snake[0].dx=0;
                        snake[0].dy=1;
                }
                if((key==75) && snake[0].dx !=1) // Direccion : izquierda
                {
                        snake[0].dx=-1;
                        snake[0].dy=0;
                }
                if((key==77) && snake[0].dx !=-1) // Direccion : Derecha
                {
                        snake[0].dx=1;
                        snake[0].dy=0;
                }
        }
}

/*
Procedimiento : Juego::genSnake : genera una serpiente horizontal con una longitud determinada y la imprime en la pantalla 
utilizando caracteres como representación de cada segmento.
*/
void Juego::genSnake()
{
        int i;
        snake[0].x = 30; // establece la coordenada x del primer segmento de la serpiente en 30.
        snake[0].y = 10; // establece la coordenada y del primer segmento de la serpiente en 10.
        snake[0].dx = 1; // establece la dirección x del primer segmento de la serpiente en 1, lo que significa que la serpiente se moverá hacia la derecha.
        snake[0].dy = 0; // establece la dirección y del primer segmento de la serpiente en 0, lo que significa que la serpiente no se moverá verticalmente.
        snake[0].cuerpo = 'o'; // establece el carácter que representa el primer segmento de la serpiente (cabeza)
        
        for(i=1;i < tam; i++) // se utiliza para generar los siguientes segmentos de la serpiente. 
        {
            snake[i].x=snake[i-1].x-1; /*establece la coordenada x del segmento actual de la serpiente como la coordenada x del segmento anterior menos 1, 
            lo que crea una serpiente horizontal.*/
            snake[i].y=snake[i-1].y; /*establece la coordenada y del segmento actual de la serpiente como la coordenada y del segmento anterior.*/
        //     snake[i].cuerpo = 'o';
            snake[i].cuerpo = 176; // establece el carácter que representa el segmento actual de la serpiente
        }
 
        for(i=0; i<tam; i++) // se utiliza para imprimir cada segmento de la serpiente en la pantalla utilizando la función "gotoxy" y el carácter correspondiente.
        {
            gotoxy(snake[i].x,snake[i].y); //mueve el cursor de la consola a las coordenadas x e y del segmento actual de la serpiente.
            cout << snake[i].cuerpo; //  imprime el carácter correspondiente en la posición actual del cursor de la consola.
        }
}
 
/*
Procedimiento : Juego::cfruta: maneja la lógica del juego en lo que respecta a la interacción entre la serpiente y la fruta, y realiza las acciones 
necesarias para actualizar el estado del juego en caso de que se produzca una colisión.
*/
void Juego::cfruta()
{
        if(snake[0].x==fruta.x && snake[0].y==fruta.y) /*verifica si la cabeza de la serpiente (guardada en la posición 0 del arreglo "snake") 
        se superpone con la posición de la fruta en el tablero del juego. Si es así, se lleva a cabo una serie de acciones:*/
        {
                genFruta(); // Se genera una nueva posición aleatoria para la fruta mediante la llamada a la función 
                tam+=1; // Se incrementa el tamaño de la serpiente en 1 unidad (ya que la serpiente "come" la fruta).
                snake[tam-1].cuerpo = 176; // Se asigna el carácter a la posición del cuerpo de la serpiente que corresponde a la nueva unidad añadida.
                // snake[tam-1].cuerpo=184;
                score+=1; // Se incrementa en 1 la variable "score" que lleva la cuenta de los puntos obtenidos por el jugador.
                if(tam%6==0) /*Si el tamaño de la serpiente es múltiplo de 10, se incrementa el nivel del juego y se reduce 
                la velocidad (lo que probablemente afecta la velocidad de movimiento de la serpiente).*/
                        {
                                nivel++;
                                velocidad-=20;
                        }
        }
}

/*
Procedimiento : Juego::actualizar : actualiza la posición de la serpiente en la pantalla y la mueve en la dirección actual.
*/
void Juego::actualizar()
{
        int i;
        gotoxy(snake[tam-1].x,snake[tam-1].y); /* Utiliza una función llamada "gotoxy" para posicionar el cursor en la posición de la cola de 
        la serpiente (es decir, la última sección de la serpiente) en la pantalla y escribe un espacio en blanco para borrar la sección anterior*/
        cout<<" ";
        
        for (i= tam-1; i>0; i--) /*comienza en la posición de la cola de la serpiente y mueve cada sección de la serpiente hacia la posición de 
        la sección anterior en la cadena. Esto se hace moviendo la coordenada "x" y "y" de cada sección a la coordenada de la sección anterior.*/
        {
                snake[i].x=snake[i-1].x;
                snake[i].y=snake[i-1].y;
        }
        /*la cabeza de la serpiente se mueve en la dirección en la que se está moviendo actualmente 
        (indicado por las variables "dx" y "dy") al aumentar las coordenadas "x" y "y" de la cabeza de la serpiente.*/
        snake[0].x += snake[0].dx;
        snake[0].y += snake[0].dy;
}
 
/*
Procedimiento : Juego::imprimir : se encarga de imprimir la serpiente en la pantalla. 
*/
void Juego::imprimir()
{
        int i;
        for(i= tam-1; i>=0; i--)
        {
        gotoxy(snake[i].x,snake[i].y); /*La función "gotoxy" se utiliza para mover el cursor a una posición específica en la pantalla. 
        En este caso, se mueve a la posición de la sección i-ésima de la serpiente, utilizando las coordenadas x e y de esa sección.*/
        // snake[i].cuerpo = 'o';
        snake[i].cuerpo = 'o'; // caracter a imprimir
        cout<<snake[i].cuerpo;
        /*La impresión se realiza en orden inverso, desde la última sección hasta la primera, 
        lo que significa que se imprime la sección más cercana a la cabeza de la serpiente en último lugar.*/
        }
}

/*
Procedimiento : Juego::loop : ontrola el flujo del juego y ejecuta las diferentes acciones necesarias en cada iteración del bucle para que el juego funcione correctamente.
*/
void Juego::loop()
{
        while(!gameover) //  se ejecutará mientras la variable gameover sea falsa (es decir, mientras el juego no haya terminado).
        {
                cfruta(); // genera una nueva fruta en una posición aleatoria del tablero del juego.
                setColor(35,35);
                puntos(); // actualiza la puntuación del jugador.
                actualizar(); // actualiza la posición de la serpiente en función de la dirección que haya elegido el jugador.
                setColor(33,33);
                imprimir(); // dibuja el tablero del juego en la pantalla con la posición actual de la serpiente y la fruta.
                tecla(); // espera a que el jugador presione una tecla para cambiar la dirección de la serpiente.
                tecla();
                tecla();
                tecla();
                tecla();
                muerte(); /* comprueba si la serpiente ha colisionado con los bordes del tablero o con su propia cola, 
                en cuyo caso se cambia el valor de gameover a true para salir del bucle.*/
                Sleep(velocidad); /*pausa la ejecución del programa durante un tiempo determinado (especificado por la variable velocidad) 
                antes de comenzar la siguiente iteración del bucle.*/
        }
}

/*
Procedimiento : Juego::main : inicializa las variables del juego, dibuja el tablero, genera la serpiente y la fruta, y luego inicia el bucle principal del juego. 
Cuando el juego termina, muestra la pantalla de fin de juego y vuelve a llamar a la función main para iniciar un nuevo juego.
*/
void Juego::main()
{
        //system("color 0a"); // Establece el color de la consola en negro y verde
        gameover=false; // Inicializa la variable gameover en falso
        portada();
        portada2(); // Llama a la función portada para mostrar la pantalla de inicio del juego
        system("cls"); // Limpia la pantalla
        score=1; // Inicializa la variable score en 1
        velocidad=110; // Inicializa la variable velocidad en 110
        tam=2; // Inicializa la variable tam en 4
        nivel=1; // Inicializa la variable nivel en 1
        setColor(34,34);
        tablero(); // Llama a la función tablero para dibujar el tablero del juego
        srand(time(NULL)); // Inicializa la semilla para generar números aleatorios
        genSnake(); // Genera la serpiente en una posición aleatoria
        genFruta(); // Genera la fruta en una posición aleatoria
        loop(); // Inicia el bucle principal del juego
        muerte2(); // Llama a la función muerte2 para mostrar la pantalla de fin de juego
        main(); // Vuelve a llamar a la función main para iniciar un nuevo juego
}

int main()
{
        Juego j;
        j.main();
}