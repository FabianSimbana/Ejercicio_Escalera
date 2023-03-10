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
Un puntero es una variable que almacena la direcciÛn de memoria de un objeto. Los punteros se usan ampliamente en C y C++ para tres propÛsitos principales:

- para asignar nuevos objetos en el montÛn,
- para pasar funciones a otras funciones
- para iterar sobre elementos en matrices u otras estructuras   de datos.

## Punteros B·sicos
Un puntero b·sico es un puntero cuya duraciÛn no est· controlada por un objeto encapsulado, como un puntero inteligente. Se puede asignar un puntero b·sico a la direcciÛn de otra variable que no sea de puntero, o bien se le puede asignar un valor de nullptr. Un puntero al que no se ha asignado un valor contiene datos aleatorios.

TambiÈn se puede desreferenciar un puntero para recuperar el valor del objeto al que apunta. El operador de acceso a miembros proporciona acceso a los miembros de un objeto.

## Los punteros y el ampersand &
El ampersand es un operador de C/C++ y es com˙nmente utilizado para los punteros.
Este operador nos permite obtener la direcciÛn de memoria de una variable cualquiera y es justo esto
(la direcciÛn en memoria) lo que utilizan los punteros para referenciar valores.

## Los apuntadores y el asterisco *
El asterisco es, por decirlo de alguna forma, el operador por excelencia de los punteros.
SU utilidad radica en que si el valor de dicho apuntador corresponde a una direcciÛn de memoria, el
asterisco nos permite resolverla y acceder al valor almacenado allÌ. ViÈndolo desde otro enfoque, un
apuntador es ˙nicamente una direcciÛn de memoria (un n˙mero).
el asterisco es el que hace la magia de obtener el valor referenciado por dicha direcciÛn.
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

Las estructuras de datos en C++ se pueden entender como un tipo de dato compuesto (no complejo). Las estructuras de datos permiten almacenar de manera ordenada una serie de valores dados en una misma variable. Las estructuras de datos m·s comunes son los arrays, que pueden ser unidimensionales (de una dimensiÛn) tambiÈn conocidos como vectores, o multidimensionales (de varias dimensiones) tambiÈn conocidos como matrices, aunque hay otras un poco m·s diferentes como son struct, las enumeraciones y los punteros.

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

Las colas se utilizan en sistemas inform·ticos, transportes y operaciones de investigaciÛn (entre otros), dÛnde los objetos, personas o eventos son tomados como datos que se almacenan y se guardan mediante colas para su posterior procesamiento. Este tipo de estructura de datos abstracta se implementa en lenguajes orientados a objetos mediante clases, en forma de listas enlazadas.

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

Una pila (stack en inglÈs) es una lista ordinal o estructura de datos en la que el modo de acceso a sus elementos es de tipo LIFO (del inglÈs Last In First Out, ˙ltimo en entrar, primero en salir) que permite almacenar y recuperar datos. Esta estructura se aplica en multitud de ocasiones en el ·rea de inform·tica debido a su simplicidad y ordenaciÛn implÌcita de la propia estructura.
Para el manejo de los datos se cuenta con dos operaciones b·sicas: apilar (push), que coloca un objeto en la pila, y su operaciÛn inversa, retirar (o desapilar, pop), que retira el ˙ltimo elemento apilado.

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

Las listas enlazadas son estructuras de datos semejantes a los array salvo que el acceso a un elemento no se hace mediante un indice sino mediante un puntero. La asignaciÛn de memoria es hecha durante la ejecuciÛn. En una lista los elementos son contiguos en lo que concierne al enlazado.

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

![ARBOL](data:image/png;base64,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)

Un ·rbol es una estructura de datos no lineal puesto que cada elemento apunta a uno o varios
elementos del mismo tipo; esto es dado un elemento, no hay un ˙nico camino a seguir.
El elemento que apunta a otro es llamado padre/raÌz, mientras que el elemento apuntado se conoce
como hijo.
Todos los elementos tienen un padre a excepciÛn de la raÌz. Puede decirse que un ·rbol esta formado
por sub·rboles resaltando asÌ su naturaleza recursiva.

## ARBOLES BINARIOS

Un ·rbol binario de buque da o ABB, es un ·rbol binario en el cual para todo elemento, los
elementos mayores a Èl, se ubican en su rama derecha, mientras que los elementos menores van
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

En primer lugar, se debe usar un bloque try para incluir una o m·s instrucciones que pueden iniciar una excepciÛn.

Una expresiÛn throw indica que se ha producido una condiciÛn excepcional, a menudo un error, en un bloque try. Se puede usar un objeto de cualquier tipo como operando de una expresiÛn throw. Normalmente, este objeto se emplea para comunicar informaciÛn sobre el error. En la mayorÌa de los casos, se recomienda usar la std::exception clase o una de las clases derivadas definidas en la biblioteca est·ndar. Si uno de ellos no es adecuado, se recomienda derivar su propia clase de excepciÛn de std::exception.

Para controlar las excepciones que se puedan producir, implemente uno o varios bloques catch inmediatamente despuÈs de un bloque try. Cada bloque catch especifica el tipo de excepciÛn que puede controlar.

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

# AutÛmata Finito Determinista


