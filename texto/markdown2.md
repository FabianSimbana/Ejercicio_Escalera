#2do Bimestre
---

#**Practica temas primer bimestre**

##Conceptos basicos

## Librerias

El comando ***#include*** ayuda a incluir librerias a nuestro codigo, las librerias son recursos que uno va a utilizar en un programa como el ***stdio.h*** que es una libreria que permite imprimir y obtener informaci√≥n.

## Compilador
 El compilador que usaremos es el git bash que permite correr programas de c y c++, para compilar debemos escribir en la terminal el siguiente comando:

     gcc src/main.c -o output/main.exe

**øque hace un compilador?**

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

**esta clase de funciones y procedimientos se uso para incluir los bucles**

##Bucles
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

##Archivos
Es el acceso a un archivo, de algun lugar del almacenamiento del PC. Es importante realizar una correcta apertura y cierre de este archivo. Sobre estos archivos re pueden realizar varias operaciones, de apertura, de escritura, lectura y cierre. Si el archivo queda abierto, no puede ser usado por otro programa.
Para la apertura del archivo, lo podemoa hacer asi:

                        PONER EJEMPLO

el nombre-fichero es la ruta del archivo

El modo, sera el uso que se le va a dar al archivo, tenemos que:
r = abre un fichero para leerlo
w = abre un fichero para escritura, si no existe l crea, y si ya existe, lo destruye y crea otro nuevo
a = abre un fichero para anadir datos al final
+ = abre el archivo para leer y escribir
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


Un puntero es una variable que almacena la direcciÛn de memoria de un objeto. Los punteros se usan ampliamente en C y C++ para tres propÛsitos principales:

- para asignar nuevos objetos en el montÛn,
- para pasar funciones a otras funciones
- para iterar sobre elementos en matrices u otras estructuras   de datos.

##Punteros B·sicos
Un puntero b·sico es un puntero cuya duraciÛn no est· controlada por un objeto encapsulado, como un puntero inteligente. Se puede asignar un puntero b·sico a la direcciÛn de otra variable que no sea de puntero, o bien se le puede asignar un valor de nullptr. Un puntero al que no se ha asignado un valor contiene datos aleatorios.

TambiÈn se puede desreferenciar un puntero para recuperar el valor del objeto al que apunta. El operador de acceso a miembros proporciona acceso a los miembros de un objeto.
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
##MEMORIA CON PUNTEROS

con la herramienta puntero nos servira para poder reservar espacios de memoria que posteriormente seran usados. Para ello se pueden usar distintas funciones que reservaran ese esapacio de memoria.

**Ejemplo de reservar espacios de memoria con punteros**

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


