# 2do Bimestre
---

# **Practica temas primer bimestre**

## Conceptos basicos

## Librerias

El comando ***#include*** ayuda a incluir librerias a nuestro codigo, las librerias son recursos que uno va a utilizar en un programa como el ***stdio.h*** que es una libreria que permite imprimir y obtener información.

## Compilador
 El compilador que usaremos es el git bash que permite correr programas de c y c++, para compilar debemos escribir en la terminal el siguiente comando:

     gcc src/main.c -o output/main.exe

**�que hace un compilador?**

el compilador hace un analisis de sintaxis y un analisis de semantica que lo traduce a lenguaje de computador y ejecuta las instrucciones escritas.

## Palabras reservadas

**int** : declara a una variable como entero

**printf**: permite la salida de texto

**scanf**: permite la entrada de variables

**for**: genera una secuencia

## Declaracion de variables

**variable local**: son variables que se usaran en una sola parte del codigo. 

**variable global**: son variables que se usaran en cualquier parte del codigo.

las variables pueden ser de cualquier tipo: int,char,float,etc. 

***Las siguientes clases fueron refuerzo desde los mas basico*** 

##Funciones y procedimientos
El procedimiento con parametros, es un void, pero se declara una variable, ej: void Fabian(hola).

En una funcion se declara primero un tipo de dato, seguido del nombre del procedimiento.

La funcion con parametros, es el tipo de dato, pero se declara una variable, ej: <numero> Fabian(hola).

El tipo de dato es la clasificacion que dio el mismo sistema a ciertos tipos de datos.

Una funcion busca hacer un calculo y devolver un valor, nunca van con el void, y al final el return.
```c
    #include <iostream>
#include <math.h>
using namespace std;

// funciones y procedimiento
int menuFun()
{
    int opc = 0;
    cout <<"\n\n\n\t MENU DE OPCIONES"              << endl
         <<" 01. salir "                            << endl  
        //  <<" 02. Pares "                            << endl  
        //  <<" 03. Impares"                           << endl      
        //  <<" 04. Signos "                           << endl      
        //  <<" 05. Signos Alternos"                   << endl   
        //  <<" 06. + -- +++ ---- +++++ ..."           << endl                    
	    //  <<" 07. 0 1 1 2 3 5 8 13 ...   "           << endl         
	     <<" 08. 1  4  7  10  13  16  19  22  25..."<< endl   
         <<" 09. 3, 8, 13, 18, 23, 28, 33, 38, ... "<< endl   
         <<" 10. 2, 4, 8, 16, 32, 64, 128, 256,... "<< endl   
         <<" 11. 3, 9, 27, 81, 243, 729, 2187, ... "<< endl  
         <<" 12. + + ++ +++ +++++ ++++++++ +++++++++++++ ...    "    << endl   
         <<" 13. 0/1  1/3  1/5  2/7  3/9   5/11  8/13  13/15 ..."    << endl   
         <<" 14. 0/2  1/4  1/6  2/8  3/10  5/12  8/14  13/16 ..."    << endl   
         <<" 15. 2	 3	 5 	7	11	13	17	19	23	29	31	 ..."    << endl   
         <<" 16. ++	 +++ +++++ +++++++ +++++++++++ +++++++++++++ ..."<< endl   
         <<" Ingresa opc: ";
    cin>>opc;
    cin.clear();
    fflush(stdin);
    return opc;
}
void menuProce(int &opc)
{
    opc=0;
    cout <<"\n\n\n\t MENU DE OPCIONES" << endl
         <<" 1. salir "         <<    endl  
         <<" 2. Pares "         <<    endl  
         <<" 3. Impares"        <<    endl      
         <<" 4. Signos "        <<    endl      
         <<" 5. Signos Cambio"  <<    endl      
         <<" Ingresa opc: ";
    cin>>opc;
    cin.clear();
    fflush(stdin);
}

void doMain()
{
    int opc;
    do
    {
        menuProce(opc);
        switch (opc)    //--->      switch (# <-- menuFun())
        {
            case 1: exit(0);
                    break;
            case 2: cout << " seleccionaste pares ";
                    break;
            case 3: cout << " seleccionaste Inpares ";
                    break;
            case 4: cout << " seleccionaste Signos ";
                    break;
            default:cout << " Intenta de nuevo...";
                    break;
        }
        cout << endl << "Press any key to continue...";
        getchar();
    }while (true);
}
void forMain()
{
    int opc;
    for (;;)
    {
        menuProce(opc);
        switch (opc)    //--->      switch (# <-- menuFun())
        {
            case 1: exit(0);
                    break;
            case 2: cout << " seleccionaste pares ";
                    break;
            case 3: cout << " seleccionaste Inpares ";
                    break;
            case 4: cout << " seleccionaste Signos ";
                    break;
            default:cout << " Intenta de nuevo...";
                    break;
        }
        cout << endl << "Press any key to continue...";
        getchar();
    }
}
```

**esta clase de funciones y procedimientos se uso para incluir los bucles.**

## Bucles

El for es un poco mas estricto, es decir, solo se ejecuta algo secuencial, mientas que el while se ejecuta en base a una serie de repeticiones, como por ejemplo al hacer una condicion

El en while siempre poner un contador, un operador ternario es un proceso para simplificar codigo, tiene 3 partes: la condicion, el entonces y el caso contrario, ?=if, :=else.

```c++
void whileMain()
{
    int opc;
    while (true)
    {
        menuProce(opc);
        switch (opc)    //--->      switch (# <-- menuFun())
        {
            case 1: exit(0);
                    break;
            case 2: cout << " seleccionaste pares ";
                    break;
            case 3: cout << " seleccionaste Inpares ";
                    break;
            case 4: cout << " seleccionaste Signos ";
                    break;
            default:cout << " Intenta de nuevo...";
                    break;
        }
        cout << endl << "Press any key to continue...";
        getchar();
    }
}

void paresFor()
{
    int n=0, count = 0;
    cout <<"\n\n\n[+] GENERAR PARES: " << endl <<"Cuantos pares deseas? ";
    cin  >> n;
    // cout<< " n = " << n << endl;
    // 0 - 2 - 4 - 6 - 8 ....    n = 5
    // <<for>> porq hay un ini = 0 y un fin = n
    for (int i = 0; i < n*2; i+=2)  // i++  i = i + 2
        cout<< i << "\t";
}
void paresWhile()
{
    int n=0, count = 0;
    cout <<"\n\n\n[+] GENERAR PARES: " << endl <<"Cuantos pares deseas? ";
    cin  >> n;
    // <<while>> true -> darVueltas / false -> salir
    int i = 0;
    while ( i < n*2) 
    {
        cout<< i << "\t";
        i+=2;
    }
}
void paresDo()
{
    int n=0, count = 0;
    cout <<"\n\n\n[+] GENERAR PARES: " << endl <<"Cuantos pares deseas? ";
    cin  >> n;
    
    int i = 0;
    do
    {
        cout<< i << "\t";
        i+=2;
    } while (i < n*2);
}

void signosFor()
{
    char c;
    int n=0, count = 0;
    cout << "\n\n\n[+] GENERAR SIGNOS: " << endl ;
    cout << "Cuantos signos deseas? ";
    cin  >> n;
    cout << "Ingresa un caracter:  ";
    cin  >> c;
    for (int i = 0; i < n; i++)
        cout<< c << "\t";
}
void signosDo()
{
    char c;
    int n=0, count = 0;
    cout << "\n\n\n[+] GENERAR SIGNOS: " << endl ;
    cout << "Cuantos signos deseas? ";
    cin  >> n;
    cout << "Ingresa un caracter:  ";
    cin  >> c;

    int i = 0;
    do
    {
        cout<< c << "\t";
        i++;
    } while (i < n);
}
void signosWhile()
{
    char c;
    int n=0, count = 0;
    cout << "\n\n\n[+] GENERAR SIGNOS: " << endl ;
    cout << "Cuantos signos deseas? ";
    cin  >> n;
    cout << "Ingresa un caracter:  ";
    cin  >> c;

    int i = 0;
    while (i < n)
    {
        cout<< c << "\t";
        i++;
    } 
}
```

***en estas clases practicamos bucles del mismo ejercicio pero con diferentes herramientas.***

**Finalizamos con un repaso de archivos**

## Archivos
Es el acceso a un archivo, de algun lugar del almacenamiento del PC. Es importante realizar una correcta apertura y cierre de este archivo. Sobre estos archivos re pueden realizar varias operaciones, de apertura, de escritura, lectura y cierre. Si el archivo queda abierto, no puede ser usado por otro programa.
Para la apertura del archivo, lo podemoa hacer asi:

el nombre-fichero es la ruta del archivo

El modo, sera el uso que se le va a dar al archivo, tenemos que:
r = abre un fichero para leerlo
w = abre un fichero para escritura, si no existe l crea, y si ya existe, lo destruye y crea otro nuevo
a = abre un fichero para anadir datos al final
'+' = abre el archivo para leer y escribir
b = el fichero es de tipo binario
t = ficheros de tipo texto

Se pueden combinar estos modos a conveniencia para la apertura de archivos.
el fopen, es un procedimiento que indica la apertura de un archivo

### Lectura y escritura

El sizeof, calcula el tamano de un dato, sera, sizeof(dato) o sizeof(tipo-dato) 

el .dat  se usa para rchivos de tipo binario

fputc, para imprimir un caracter, fputs para una cadena de caracteres.

```c
#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;

void Loading()
{ 
    int ind =0;
    string c= "\\|/-|"; 
    for(int i=0; i<= 100; i++)
    {   
        //updateBar(i);
        if(i % 4 ==0)
            ind =0;
        cout    << "\r" << c[ind++]   
                << " " << i << "%";
        usleep(90000);
    }
}

void LeerArchivo(string pathFile)  //-->  datafiles/ListaAlumnos.txt
{
    string s;
    fstream f;
    f.open(pathFile, ios_base::in);
    if ( !f.is_open() ) 
        cout << "Error de abrir el archivo." << endl;
    else
        do 
        {
            getline( f, s );
            cout << s << endl;
        }while( !f.eof() );
    f.close();
}
void CrearArchivo(string pathFile)  //-->  datafiles/ListaAlumnos.txt
{
    string s;
    fstream f;

    cout << "Escibiendo en un archivo" << endl;
    f.open(pathFile, ios_base::app);

    if (f.is_open())
    {
        // f << "pepe lucho" << endl;
        // f << "ana" << endl;
        do
        {
            cout<< "(N = salir ) Ingresa un nombre: ";
            cin>>s;
            if (s!="N")
                f << s << endl;
        } while (s!="N");
    }
    f.close();
}

int main()
{
    Loading();
    // CrearArchivo("datafiles/ListaAlumnos.txt");
    // LeerArchivo("datafiles/ListaAlumnos.txt");
    return 0;
}
```

#PUNTEROS

![Punteros](https://i0.wp.com/somoshackersdelaprogramacion.es/wp-content/uploads/2022/06/puntero.png?resize=596%2C199&ssl=1)
Un puntero es una variable que almacena la direcci�n de memoria de un objeto. Los punteros se usan ampliamente en C y C++ para tres prop�sitos principales:

- para asignar nuevos objetos en el mont�n,
- para pasar funciones a otras funciones
- para iterar sobre elementos en matrices u otras estructuras   de datos.

## Punteros B�sicos
Un puntero b�sico es un puntero cuya duraci�n no est� controlada por un objeto encapsulado, como un puntero inteligente. Se puede asignar un puntero b�sico a la direcci�n de otra variable que no sea de puntero, o bien se le puede asignar un valor de nullptr. Un puntero al que no se ha asignado un valor contiene datos aleatorios.

Tambi�n se puede desreferenciar un puntero para recuperar el valor del objeto al que apunta. El operador de acceso a miembros proporciona acceso a los miembros de un objeto.

## Los punteros y el ampersand &
El ampersand es un operador de C/C++ y es com�nmente utilizado para los punteros.
Este operador nos permite obtener la direcci�n de memoria de una variable cualquiera y es justo esto
(la direcci�n en memoria) lo que utilizan los punteros para referenciar valores.

## Los apuntadores y el asterisco *
El asterisco es, por decirlo de alguna forma, el operador por excelencia de los punteros.
SU utilidad radica en que si el valor de dicho apuntador corresponde a una direcci�n de memoria, el
asterisco nos permite resolverla y acceder al valor almacenado all�. Vi�ndolo desde otro enfoque, un
apuntador es �nicamente una direcci�n de memoria (un n�mero).
el asterisco es el que hace la magia de obtener el valor referenciado por dicha direcci�n.
##Punteros + Matriz

**EJEMPLOS DE PUNTEROS + MATRICES**
```c++
void showVector(int v[], int c){ //para vectores
    for (int i = 0; i < c; i++)
        cout<<v[i]<<"\t"; 
    cout<<endl;
} 
void showPtrVector(int *pv, int c){ //para vectores usando puntero
    for (int i = 0; i < c; i++)
        cout<<pv[i]<<"\t"; 
    cout<<endl;
}
void showMatriz(int m[][3], int f, int c){ //para matriz
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
            cout<< m[i][j] <<"\t"; 
        cout<< endl;
    }
} 
void showMatrizComoVector(int mv[], int f, int c){ //para matriz
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
            cout<< mv[i*c+j] <<"\t";    // m[i][j]
        cout<< endl;
    }
} 
void showPtrMatriz(int *p, int f,int c)
{
   for (int i = 0; i < f; i++)
   {
        for (int j = 0; j < c; j++)
            cout<< *(p+i * c+j) <<"\t";   // m[i][j]
        cout<< endl;
   }
}
void showVectorPtrMatriz(int *vp[], int f,int c)
{
   for (int i = 0; i < f; i++)
   {
        for (int j = 0; j < c; j++)
            cout<< vp[i][j] <<"\t";   // m[i][j]
        cout<< endl;
   }
}
void showPtrDobleMatriz(int **pd, int f,int c)
{
   for (int i = 0; i < f; i++)
   {
        for (int j = 0; j < c; j++)
            cout<< pd[i][j] <<"\t";   
        cout<< endl;
   }
}

/// Mas opciones para matrices
void getMatriz(int **matriz)
{
    int fil = 3; //(sizeof(matriz)/sizeof(matriz[0]));
    int col = 2; //(sizeof(matriz[0])/sizeof(matriz[0][0]));
    
    cout<<"----"<<endl;
    cout<<(sizeof(**matriz))<<endl;
    cout<<(sizeof(&matriz)/sizeof(&matriz[0]))<<endl;
    cout<<(sizeof(*matriz[0])/sizeof(matriz[0][0]))<<endl;
    cout<<"----"<<endl;

    for (int i=0; i<fil; i++)
    {
        for(int j=0;j<col; j++)
            cout<<matriz[i][j]<<" ";
        cout <<endl;
    }
}
void setMatriz(int **&matriz, int fil, int col)
{
    for (int i=0; i<fil; i++)
        for(int j=0;j<col; j++)
                matriz[i][j]=0;
}
void showArrayVector(){
    int ai[]={1,3,5,7,9};
    int *pi;
    pi = ai;
    *(pi+0) = 10;   // cambiar valor
    showPtrVector(pi,5);
}
```

## MEMORIA CON PUNTEROS

![MEMORIA](https://1.bp.blogspot.com/-gKWUcwIKWWU/VvPtKUAIFjI/AAAAAAAAFRc/WLCqWfSxlZ4ioocmBuFS3KaRhzs0I13OA/w1200-h630-p-k-no-nu/Difference%2Bbetween%2Bstack%2Band%2Bheap%2Bmemory%2Bin%2BJava.gifG)

con la herramienta puntero nos servira para poder reservar espacios de memoria que posteriormente seran usados. Para ello se pueden usar distintas funciones que reservaran ese esapacio de memoria.

**Ejemplo de reservar espacios de memoria con punteros.**

```c++ 
  #include <iostream>

    using namespace std;

    int **crearMatrizMalloc(int f, int c)
    {  
        int **m=NULL;
        m = (int **) malloc(f*sizeof(int *));
        for (int i = 0; i < f; i++)
            m[i] = (int *) malloc(c*sizeof(int));
        
        return m;
    }
    int **crearMatrizCalloc(int f, int c)
    {
        int **m=NULL;
        m = (int **) calloc(f, sizeof(int *));
        for (int i = 0; i < f; i++)
            m[i] = (int *) calloc(c, sizeof(int));
        
        return m;
    }
    int **crearMatrizNew(int f, int c)
    {   //int i = new int(10);    //heap   --> delete
        //int i = 10;             //stack
        int **m=NULL;
        m = new int*[f];
        for (int i = 0; i < f; i++)
            m[i] = new int[c];

        return m;
    }
```

# ESTRUCTURAS 

Las estructuras de datos en C++ se pueden entender como un tipo de dato compuesto (no complejo). Las estructuras de datos permiten almacenar de manera ordenada una serie de valores dados en una misma variable. Las estructuras de datos m�s comunes son los arrays, que pueden ser unidimensionales (de una dimensi�n) tambi�n conocidos como vectores, o multidimensionales (de varias dimensiones) tambi�n conocidos como matrices, aunque hay otras un poco m�s diferentes como son struct, las enumeraciones y los punteros.

```c++ 
struct Mascota
{
    string tipo;
    string nombre;
};

struct Alumno
{
    int  id;
    int  edad;
    char nombre[20];
    Mascota mascotita;
};
```
# COLAS

![colas](https://1.bp.blogspot.com/-yU24HlEAb5k/UJFLeeCJEtI/AAAAAAAAAUg/nog3KdbtCg0/w1200-h630-p-k-no-nu/colas+en+c%252B%252B.png)

Las colas se utilizan en sistemas inform�ticos, transportes y operaciones de investigaci�n (entre otros), d�nde los objetos, personas o eventos son tomados como datos que se almacenan y se guardan mediante colas para su posterior procesamiento. Este tipo de estructura de datos abstracta se implementa en lenguajes orientados a objetos mediante clases, en forma de listas enlazadas.

```C++
struct nodo              //  [ # ]>-->
{
    int nro;
    struct nodo *sgte;
};
 
struct cola             //  <--< >-->   
{
    nodo *delante;
    nodo *atras  ;
};
 
 
void encolar( struct cola &q, int valor )
{
     struct nodo *aux = new(struct nodo);
     
     aux->nro = valor;
     aux->sgte = NULL;
     
     if( q.delante == NULL)
         q.delante = aux;   // encola el primero elemento
     else
         (q.atras)->sgte = aux;
     q.atras = aux;        // puntero que siempre apunta al ultimo elemento
}
 
int desencolar( struct cola &q )
{
     int num ;
     struct nodo *aux ;
     
     aux = q.delante;      // aux apunta al inicio de la cola
     num = aux->nro;
     q.delante = (q.delante)->sgte;
     delete(aux);          // libera memoria a donde apuntaba aux
     
     return num;
}
 
void muestraCola( struct cola q )
{
     struct nodo *aux;
     aux = q.delante;
         
     while( aux != NULL )
     {
            cout<<"   "<< aux->nro ;
            aux = aux->sgte;
     }    
}
 
void vaciaCola( struct cola &q)
{
     struct nodo *aux;
     
     while( q.delante != NULL)
     {
            aux = q.delante;
            q.delante = aux->sgte;
            delete(aux);
     }
     q.delante = NULL;
     q.atras   = NULL;
}
```

# PILAS

![PILAS](https://4.bp.blogspot.com/-Hnka4CO97Kk/UJFJU-a91BI/AAAAAAAAAUI/PjUC6P7J-0g/s320/Pilas%2Ben%2Bc%2B%2B.jpg&container=blogger&gadget=a&rewriteMime=image
)

Una pila (stack en ingl�s) es una lista ordinal o estructura de datos en la que el modo de acceso a sus elementos es de tipo LIFO (del ingl�s Last In First Out, �ltimo en entrar, primero en salir) que permite almacenar y recuperar datos. Esta estructura se aplica en multitud de ocasiones en el �rea de inform�tica debido a su simplicidad y ordenaci�n impl�cita de la propia estructura.
Para el manejo de los datos se cuenta con dos operaciones b�sicas: apilar (push), que coloca un objeto en la pila, y su operaci�n inversa, retirar (o desapilar, pop), que retira el �ltimo elemento apilado.

```c++
struct nodo{
    int nro;
    struct nodo *sgte;
};
 
typedef nodo *ptrPila;   // creando nodo tipo puntero( tipo de valor )
//struct nodo1 ptrPila1;   

void push( ptrPila &p, int valor )      // Apilar
{
     ptrPila aux = new(struct nodo);  // apuntamos al nuevo nodo creado
     aux->nro = valor;
     
     aux->sgte = p ;
     p = aux ;
     cout <<" << apilado >> " <<endl;
}
 
void pop( ptrPila &p )   // Desapilar
{
     ptrPila aux;
     
     aux = p ;
     //num = aux->nro;   // asignamos el primer vamor de la pila
     cout <<" << desapilado >> " << aux->nro <<endl;
     
     p = aux->sgte ;
     delete(aux);
}
 
void mostrar_pila( ptrPila p )
{
     ptrPila aux;
     aux = p;     // apunta al inicio de la lista
     
     while( aux !=NULL )
     {
        cout<<"\t"<< aux->nro <<endl;
        aux = aux->sgte;
     }    
}
 
void destruir_pila( ptrPila &p)
{
     ptrPila aux;
     
     while( p != NULL)
     {
           aux = p;
           p = aux->sgte;
           cout<<"despachando: "<< aux->nro <<"\t";
           delete(aux);
     }
     cout<<"\n\n\t\t Pila despachada...\n\n";
}
```
# LISTA

![LISTA](https://www.monografias.com/trabajos90/listas-c/image001.jpg)

Las listas enlazadas son estructuras de datos semejantes a los array salvo que el acceso a un elemento no se hace mediante un indice sino mediante un puntero. La asignaci�n de memoria es hecha durante la ejecuci�n. En una lista los elementos son contiguos en lo que concierne al enlazado.

```C++
struct nodo{
       int nro;        // en este caso es un numero entero
       struct nodo *sgte;
};
 
typedef struct nodo *Tlista;
 
void insertarInicio(Tlista &lista, int valor)
{
    Tlista q;
    q = new(struct nodo);
    q->nro = valor;
    q->sgte = lista;
    lista  = q;
}
 
void insertarFinal(Tlista &lista, int valor)
{
    Tlista t, q = new(struct nodo);
    q->nro  = valor;
    q->sgte = NULL;
    if(lista==NULL)
        lista = q;
    else
    {
        t = lista;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        t->sgte = q;
    }
}
 
int insertarAntesDespues()
{
    int _op, band;
    cout<<endl;
    cout<<"\t 1. Antes de la posicion           "<<endl;
    cout<<"\t 2. Despues de la posicion         "<<endl;
 
    cout<<"\n\t Opcion : "; cin>> _op;
 
    if(_op==1)
        band = -1;
    else
        band = 0;
 
    return band;
}
 
void insertarElemento(Tlista &lista, int valor, int pos)
{
    Tlista q, t;
    int i;
    q = new(struct nodo);
    q->nro = valor;
 
    if(pos==1)
    {
        q->sgte = lista;
        lista = q;
    }
    else
    {
        int x = insertarAntesDespues();
        t = lista;
        for(i=1; t!=NULL; i++)
        {
            if(i==pos+x)
            {
                q->sgte = t->sgte;
                t->sgte = q;
                return;
            }
            t = t->sgte;
        }
    }
    cout<<"   Error...Posicion no encontrada..!"<<endl;
}
 
void buscarElemento(Tlista lista, int valor)
{
    Tlista q = lista;
    int i = 1, band = 0;
 
    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            cout<<endl<<" Encontrada en posicion "<< i <<endl;
            band = 1;
        }
        q = q->sgte;
        i++;
    }
 
    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}
 
void reportarLista(Tlista lista)
{
     int i = 0;
 
     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->nro << endl;
          lista = lista->sgte;
          i++;
     }
}
 
 
void eliminarElemento(Tlista &lista, int valor)
{
    Tlista p, ant;
    p = lista;
 
    if(lista!=NULL)
    {
        while(p!=NULL)
        {
            if(p->nro==valor)
            {
                if(p==lista)
                    lista = lista->sgte;
                else
                    ant->sgte = p->sgte;
 
                delete(p);
                return;
            }
            ant = p;
            p = p->sgte;
        }
    }
    else
        cout<<" Lista vacia..!";
}
 
void eliminaRepetidos(Tlista &lista, int valor)
{
    Tlista q, ant;
    q = lista;
    ant = lista;
 
    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            if(q==lista) // primero elemento
            {
                lista = lista->sgte;
                delete(q);
                q = lista;
            }
            else
            {
                ant->sgte = q->sgte;
                delete(q);
                q = ant->sgte;
            }
        }
        else
        {
            ant = q;
            q = q->sgte;
        }
 
    }// fin del while
   
    cout<<"\n\n Valores eliminados..!"<<endl;
}
```

# ARBOLES

Un �rbol es una estructura de datos no lineal puesto que cada elemento apunta a uno o varios
elementos del mismo tipo; esto es dado un elemento, no hay un �nico camino a seguir.
El elemento que apunta a otro es llamado padre/ra�z, mientras que el elemento apuntado se conoce
como hijo.
Todos los elementos tienen un padre a excepci�n de la ra�z. Puede decirse que un �rbol esta formado
por sub�rboles resaltando as� su naturaleza recursiva.

## ARBOLES BINARIOS

Un �rbol binario de buque da o ABB, es un �rbol binario en el cual para todo elemento, los
elementos mayores a �l, se ubican en su rama derecha, mientras que los elementos menores van
en su rama izquierda.
Cada elemento se almacena una sola vez por lo que no existen elementos repetidos.

![BINARIO](https://3.bp.blogspot.com/-1JDisiYxbqU/ULEww3UOo2I/AAAAAAAAAbk/wwbMX96cSH8/s1600/ARBOL+ABB.png)

```c++
struct nodo{
     int nro;
     struct nodo *izq, *der;
};

typedef struct nodo *ABB;
/* es un puntero de tipo nodo que hemos llamado ABB, que ulitizaremos
   para mayor facilidad de creacion de variables */

ABB crearNodo(int x)
{
     ABB nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}
void insertar(ABB &arbol, int x)
{
     if(arbol==NULL)
     {
           arbol = crearNodo(x);
     }
     else if(x < arbol->nro)
          insertar(arbol->izq, x);
     else if(x > arbol->nro)
          insertar(arbol->der, x);
}

void preOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          cout << arbol->nro <<" ";
          preOrden(arbol->izq);
          preOrden(arbol->der);
     }
}

void enOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          enOrden(arbol->izq);
          cout << arbol->nro << " ";
          enOrden(arbol->der);
     }
}

void postOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          postOrden(arbol->izq);
          postOrden(arbol->der);
          cout << arbol->nro << " ";
     }
}

```

# TRY AND CATCH

En primer lugar, se debe usar un bloque try para incluir una o m�s instrucciones que pueden iniciar una excepci�n.

Una expresi�n throw indica que se ha producido una condici�n excepcional, a menudo un error, en un bloque try. Se puede usar un objeto de cualquier tipo como operando de una expresi�n throw. Normalmente, este objeto se emplea para comunicar informaci�n sobre el error. En la mayor�a de los casos, se recomienda usar la std::exception clase o una de las clases derivadas definidas en la biblioteca est�ndar. Si uno de ellos no es adecuado, se recomienda derivar su propia clase de excepci�n de std::exception.

Para controlar las excepciones que se puedan producir, implemente uno o varios bloques catch inmediatamente despu�s de un bloque try. Cada bloque catch especifica el tipo de excepci�n que puede controlar.

```c++
enum ERRORES { E_DIV = 500, W_NUM_PAR, W_DEN_PAR};

int main()
{
    int a , b;

    cout << " -- div y suma 2 nro. -- "<<endl<<endl;
    cout << " ingresa a: "; cin>>a;
    cout << " ingresa b : "; cin>>b;


    try
    {
        if (b == 0)
            throw 500;  
        // if (a%2 !=0)
        //     throw 501;  
        // if (b%2 !=0)
        //     throw 502;
        cout << " division a/b es "<< a/b<<endl<<endl;
    }
    catch (const int e) 
    {
        switch (e)
        {
            case 500 :  cout<<"Error: no se puede division por cero"<<endl<<endl;  
                        b=1;
                        cout << " Division arreglada a/b : "<< a/b<<endl<<endl;
                        b=0;
                        break;
            case 501 :         cout<<"Warning: Numerador no es par"<<endl<<endl;   break;
            case 502 :    cout<<"Warning: Denominador no es par"<<endl<<endl;   break;
        }
    }
    

    cout << " sumar a+b es : "<< a+b<<endl<<endl;
    cout << " -- FIN -- ";
    /* do code */
}

```

# Aut�mata Finito Determinista

Aut�mata Finito Determinista - ADF

Un aut�mata finito determinista es una qu�ntupla que denotaremos de manera gen�rica por M=(Q,?,q0,?,F), donde:
- Q       es un conjunto finito cuyos elementos llamaremos estados. 
- ?       es un alfabeto que llamamos alfabeto de entrada. 
- q0?Q    es un estado se�alado que llamamos estado inicial. 
- F       es un subconjunto de Q no vac�o, cuyos elementos llamamos estados finales. 
- ?       es una aplicaci�n de Q�??Q , que llamamos funci�n de transici�n. 

por ejemplo:
Tenemos un alfabeto ? = {a, b, c}, entonces en la matriz de transici�n tomara la letra 'a' como indice 0 , letra 'b' indice 1 y letra 'c' indice 2.

tb de transiciones
 1---0
s1  s1  s2--------------0 --> 1*s1 ---0>---  s2*1
s2  s1  s2-----------------------------|_____0<_____|

![automata](https://www.matesfacil.com/automatas-lenguajes/automatas/autom1.png)

**EJEMPLO**

```c++
void MostrarEstados(vector<int> v){
    cout << "\n\n ESTADOS DEL AUTOMATA \n\n";
    for(int i=0; i<v.size(); i++){
        cout << " " << i <<"  -->  q" << v[i] << endl;
    }
}

void IngresaAutomata(vector<int> &E, vector<char> &S, int T[MAX][MAX]){

    int numE;  // Numero de estados
    int numS;  // Numero de simbolos
    char c;

    // Generando estados
    cout << "\n Cantidad de Estados: ";
    cin >> numE;
    for(int i=0; i<numE; i++){
        E.push_back(i);
    }

    // Ingresando simbolos
    cout << "\n Cantidad de Simbolos: "; cin >> numS;
    cout << endl;
    for(int i=0; i<numS; i++){
        cout << "\t Simbolo " << i+1 << " : ";
        cin >> c;
        S.push_back(c);
    }
    sort(S.begin(),S.end());  // Ordenando simbolos

    // Ingresando tabla de transiciones
    cout << "\n INGRESE TABLA DE TRANSICIONES \n\n";
    for(int i=0; i<numE; i++){
        for(int j=0; j<numS; j++){
            cout << "\t T["<<i<<"]["<<j<<"] : ";
            cin >> T[i][j];
        }
    }

    // Mostrando tabla de transiciones
    cout << "\n\n TABLA DE TRANSICIONES \n\n";
    for(int i=0; i<numE; i++){
        for(int j=0; j<numS; j++){
            cout << "\t" << T[i][j] << "  ";
        }
        cout << endl;
    }
}
bool VerificarPalabra(vector<int> w, int T[MAX][MAX], int q0, vector<int>qf){

    int q, s;
    q = q0;
    bool EstadoVerificacion = false;

    for(int i=0; i<w.size(); i++){
        s = w[i];
        q = T[q][s];
    }

    for(int i=0; i<qf.size(); i++){
        if(q==qf[i]){
            EstadoVerificacion = true;
            break;
        }
    }
    return EstadoVerificacion;
}

void ConvertirPalabra(string palabra, vector<char>S, vector<int>&w){

    int i, k=0;

    while(w.size()!=palabra.length()){
        for(i=0; i<S.size(); i++){
            if(palabra[k]==S[i]){
                w.push_back(i);
            }
        }
        k++;
    }
}
```