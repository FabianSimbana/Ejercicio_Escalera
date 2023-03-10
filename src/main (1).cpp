#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <iomanip>
#include "../lib/color.h"

using namespace std;

void gotoxy(int x, int y)
{
        HANDLE hCon;
        hCon=GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos;
        dwPos.X=x;
        dwPos.Y=y;
        SetConsoleCursorPosition(hCon,dwPos);
}
 
class Snake
{
    public:
        int x,y; 
        int dx,dy;
        char cuerpo; 
};
 
class Fruta
{
    public:
        int x,y;
        char cuerpo = 254;
};

class Juego
{
    public:
        void main(); 
    private:
        int score, nivel, velocidad, longitud = 4, columnas = 21, filas = 64;  
        Snake snake[100]; 
        Fruta fruta; 
        bool gameover=false; 
        void tablero_juego();
        void tablero_portada(); 
        void generar_Fruta();
        void generar_Serpiente();
        void loop(); 
        void interactividad_Usuario(); 
        void actualizar_Serpiente(); 
        void imprimir_Serpiente();
        void comer_Fruta(); 
        void muerte_Serpiente(); 
        void puntos(); 
        void portada_Inicio(); 
        void portada_Carga();
        void pantalla_Muerte(); 
};

void Juego::tablero_portada()
{
    system("cls");  
    int columnas = 24, filas = 79; 
    char borde = 178; 
    setColor(34,34);
    for(int i=0 ; i<filas ; i++) 
    {
        gotoxy(i,0); cout << borde;
        gotoxy(i,columnas); cout << borde;
    }
    for(int i=0 ; i<=columnas ; i++) 
    {
        gotoxy(0,i); cout << borde;
        gotoxy(filas,i); cout << borde;
    }   
}

void Juego::tablero_juego()
{
        char borde = 178;
        for(int i = 1 ; i < filas ; i++) 
        {
                gotoxy(i,1); cout << borde; 
                gotoxy(i,columnas); cout << borde;
        }
        for(int i=1 ; i<=columnas ; i++) 
        {
                gotoxy(1,i); cout << borde;
                gotoxy(filas,i); cout << borde;
        }
}

void Juego::portada_Inicio()
{
    int recorrer = 2;
    tablero_portada();
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
                    "                OOOOO",};
    setColor(33,33);
    for(int i=0;i<15;i++) 
    {
            gotoxy(20,recorrer); recorrer++;
            cout<<snkd[i]<<endl;
    }
    
    string snkl[]={ "    ______   ___ __                  __     ",
                    "   /   o /  /  /__/ ____ ___  ____  / /_____",
                    "  /  ___/__/  /__ / ___/ __ \\/ __ `/ //_/ _ \\",
                    " /  /  o  /  /  /(__  ) / / / /_/ / ,< /  __/",
                    "/__/_____/__/__//____/_/ /_/\\__,_/_/|_|\\___/"};
    setColor(31,31);
    for(int i=0;i<5;i++)
    {
            gotoxy(18,recorrer); recorrer++;
            cout<<snkl[i]<<endl;
    }
    setColor(37,37);
    gotoxy(27,23);
    cout<<"Presione ENTER para empezar"; 
    system("pause>dsdsd"); 
}

void Juego::portada_Carga()
{
        int total = 100;
        bool salir = false;
        int completar = 0, recorrer = 2;
        char simbolo = '$';
        while(!salir)
        {
                tablero_portada();

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

                setColor(33,33);
                for(int i = 0; i < 14; i++) 
                {
                        gotoxy(23,recorrer); recorrer++;
                        cout << snkd[i] << endl;
                }
                setColor(37,37);
                gotoxy(37,19);
                cout << "Cargando....";
                while (completar < total) 
                {   
                        completar = completar + 1;
                        int progreso = (completar * 100) / total;
                        gotoxy(10, 21);
                        cout << setw(3) << progreso << "%\t";
                        int longitud_barra = 50;
                        int cargar = (completar * longitud_barra) / total;
                        for (int i = 0; i < cargar; ++i)
                            cout << simbolo;
                        for (int i = cargar; i < longitud_barra; ++i) 
                            cout << " ";
                        Sleep(2);
                }
                salir = true;
        }
}

void Juego::pantalla_Muerte()
{
        char esc;
        int recorrer = 2;
        tablero_portada();
        string g4meover[]={     "  ____                       ___",
                                " / ___| __ _ _ __ ___   ___ / _ \\__   _____ _ __ ",
                                "| |  _ / _` | '_ ` _ \\ / _ \\ | | \\ \\ / / _ \\ '__|",
                                "| |_| | (_| | | | | | |  __/ |_| |\\ V /  __/ | ",
                                " \\____|\\__,_|_| |_| |_|\\___|\\___/  \\_/ \\___|_|"};
        setColor(31,31);
        for(int i=0;i<5;i++)
        {
                gotoxy(15,recorrer); recorrer++;
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
        for(int i=0;i<11;i++)
        {
                gotoxy(20,recorrer); cout << g4meover2[i] << endl;
                recorrer++;
        }
        setColor(37,37);
        gotoxy(33,recorrer+1); cout <<"Score: " << score; 
        recorrer++; 
        gotoxy(33,recorrer+1); cout <<"Nivel: " << nivel; 

        gotoxy(8,22);
        cout<<"Presione ESC para salir o cualquier otra tecla para seguir jugando"; esc = getch(); 
        if(esc==27)
                exit(1);
}

void Juego::puntos()
{
        gotoxy(filas+2,2); cout << "Score: " << (score-1)*5; 
        gotoxy(filas+2,4); cout << "Nivel: " << nivel; 
        gotoxy(filas+2,6); cout << "Longitud: " << longitud;
        gotoxy(filas+2,8); cout << "Frutas comidas: " << longitud-2; 
        gotoxy(filas+2,21); cout << "POLI SNAKE";
}

void Juego::generar_Fruta()
{
    setColor(31,31);
    fruta.x = 2+( rand() % (filas-2) ); 
    fruta.y = 2+(rand() % (columnas-2)); 
    gotoxy(fruta.x,fruta.y);
    fruta.cuerpo = '$'; 
    cout << fruta.cuerpo; 
}

void Juego::muerte_Serpiente()
{
        if(snake[0].x==1 || snake[0].x==filas || snake[0].y==1 || snake[0].y==columnas) 
                gameover = true; 
        
        for(int i = 1; i < longitud && gameover==false; i++) 
        {
                if(snake[0].x==snake[i].x && snake[0].y==snake[i].y)
                        gameover = true; 
        }
}
 
void Juego::interactividad_Usuario()
{
        int i;
        char teclas;
        if (!gameover) 
        {
                if (kbhit()==1)
                {
                        teclas=getch();
        
                }
                if((teclas==72) && snake[0].dy !=1) //Arriba
                {
                        snake[0].dx=0;
                        snake[0].dy=-1;
                }
                if((teclas==80) && snake[0].dy !=-1) // Abajo
                {
                        snake[0].dx=0;
                        snake[0].dy=1;
                }
                if((teclas==75) && snake[0].dx !=1) // Izquierda
                {
                        snake[0].dx=-1;
                        snake[0].dy=0;
                }
                if((teclas==77) && snake[0].dx !=-1) // Derecha
                {
                        snake[0].dx=1;
                        snake[0].dy=0;
                }
        }
}

void Juego::generar_Serpiente()
{
        snake[0].x = 30; 
        snake[0].y = 10; 
        snake[0].dx = 1;
        snake[0].dy = 0;
        snake[0].cuerpo = 'o';
        
        for(int i = 1;i < longitud; i++)  
        {
            snake[i].x=snake[i-1].x-1; 
            snake[i].y=snake[i-1].y; 
            snake[i].cuerpo = 176; 
        }
 
        for(int i = 0; i < longitud; i++)
        {
            gotoxy(snake[i].x,snake[i].y); 
            cout << snake[i].cuerpo; 
        }
}
 
void Juego::comer_Fruta()
{
        if(snake[0].x==fruta.x && snake[0].y==fruta.y)
        {
                generar_Fruta(); 
                longitud = longitud + 1; 
                snake[longitud-1].cuerpo = 176; 
                score+=1; 
                if(longitud%6==0) 
                        {
                                nivel++;
                                velocidad = velocidad - 20;
                        }
        }
}

void Juego::actualizar_Serpiente()
{
        gotoxy(snake[longitud-1].x,snake[longitud-1].y);
        cout<<" ";
        for (int i = longitud-1; i > 0; i--)
        {
                snake[i].x=snake[i-1].x;
                snake[i].y=snake[i-1].y;
        }
        snake[0].x = snake[0].x + snake[0].dx;
        snake[0].y = snake[0].y + snake[0].dy;
}
 
void Juego::imprimir_Serpiente()
{
        for(int i = longitud-1; i >= 0; i--)
        {
        gotoxy(snake[i].x,snake[i].y); 
        snake[i].cuerpo = 'o';
        cout<<snake[i].cuerpo;
        }
}

void Juego::loop()
{
        while(!gameover) 
        {
                comer_Fruta(); 
                setColor(35,35);
                puntos(); 
                actualizar_Serpiente();
                setColor(33,33);
                imprimir_Serpiente(); 
                interactividad_Usuario(); 
                interactividad_Usuario();
                interactividad_Usuario();
                interactividad_Usuario();
                interactividad_Usuario();
                muerte_Serpiente(); 
                Sleep(velocidad);
        }
}

void Juego::main()
{
        gameover = false; 
        portada_Inicio();
        portada_Carga(); 
        system("cls");
        score = 1; velocidad = 110; longitud = 2; nivel = 1; 
        setColor(34,34);
        tablero_juego(); 
        srand(time(NULL)); 
        generar_Serpiente(); 
        generar_Fruta(); 
        loop(); 
        pantalla_Muerte(); 
        main(); 
}

int main()
{
        Juego APP;
        APP.main();
}