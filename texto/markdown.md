# Programacion
# 1 Presentación e introducción a la asignatura

***Las calificaciones son de: Examen(3), Proyecto (3), Workshop(2) y Deberes (2) cada Bimestre, tambien hay la opcion de ganar puntos extra por investigar, el Workshop consiste en presentar las anotaciones y avances que se hayan hecho en toda la semana, todos los viernes.*** 

# 2 **GitHub**

**GitHub** facilita la colaboración con **git**. Es una plataforma que puede mantener repositorios de código en almacenamiento basado en la nube para que varios desarrolladores puedan trabajar en un solo proyecto y ver las ediciones de cada uno en tiempo real:

El **github** es una herramienta que usan los programadores que permite guardar en la nube los codigos y archivos que se esta usando para el desarollo de un software, deberes, etc.

![github](C:\Users\fabia\Desktop\ProgramaciónI\markdown\include\github.jpg)



El **github** permite guardar el progreso de codigos y archivos esto mediante la conectividad con la IDE que se use, en nuestro caso en el VSCode permite iniciar sesion con el **github** y desde la IDE mandamos los trabajos a la nube.

Esto es útil por varias razones. Por ejemplo, facilita la resolución de errores y la corrección de otros errores que puedan ocurrir durante el desarrollo. También puede anotar los cambios en cada versión, para ayudar a cualquier miembro del equipo a mantenerse al día sobre lo que se ha completado y lo que aún queda por hacer.


# 3 **Git**

**Git** es un software de VCS local que permite a los desarrolladores guardar instantáneas de sus proyectos a lo largo del tiempo. Generalmente es mejor para uso individual.

Con el **git** podemos observar al momento de trabajar los cambios que se realizan en nuestros proyectos, esta herramienta se puede usar mediante comandos como:

    - **git** init: ingresa el **git** al archivo que queremos que nos  guarde todos los cambios.

    -**git** ignored: herramienta que nos permite descartar archivos del **git** para que no se guarden en la nube o para que no guarde los cambios de dichos archivos.

    -**git** add: comando que nos permite agregar archivos al **git**.

**imagen del git**

![git](C:\Users\fabia\Desktop\ProgramaciónI\markdown\include\git.PNG)

# 4 Workshop

En el workshop de la primera semana trabajamos en equipo esto para aprender a comunicarnos y trabajar con compañeros, esto es debido a que en el ambito laboral de la programación nunca se trabaja solo, siempre hay que saber trabajar con compañeros.

**imagen trabajo en quipo**
![github](C:\Users\fabia\Desktop\ProgramaciónI\markdown\include\equipo.PNG)

# 5 IDE-VSCode

***Una IDE  es un entorno de desarrolo integrado.***

Para la materia de programacion vamos a usar una IDE que podemos personalizar a nuestro antojo ya que permite el uso de varias herramientas para que el usuario se sienta lo mas comodo posible.

***VSCode + git***

con la combinación del VScode y el git vamos a poder realizar nuestro trabajos con las herramientas necesarias para programar.

a parte del git el vs code permite descargar extensiones dentro de la herramienta, esto permite usar varios programas que permita el desarrollo de programas en cualquier tipo de lenguaje de programación, aparte de que las extensiones permiten personalizar de cualquier forma la IDE.

**imagen de las extensiones**

# 6 Markdown

**Markdown herramienta para etiquetar**

***Para el uso del markdown se debe utilizar la extension (.md).***
El mark down es una herramienta que nos permite crear archivos y documentar nuestros proyectos.

Para usar esta herramienta existen varios comandos que permetiran personalizar nuestros trabajos.

Por ejemplo este archivo que contiene la información de las clases de programacion está realizado en el mark down.

Para aprender a usar el markdown existen varias guias en internet donde se detallan los comandos.

**ingresar imgen del markdown**

# 7 Introducción a C vaiables, palabras, reservas

Una vez configurada y personalizada nuestra IDE ya se puede comenzar a programar, en este caso la clase sera de C, un tipo de lenguaje de programación que sirvio como base para la creación de mas lenguajes de programación.

## Librerias

El comando ***#include*** ayuda a incluir librerias a nuestro codigo, las librerias son recursos que uno va a utilizar en un programa como el ***stdio.h*** que es una libreria que permite imprimir y obtener información.

## Compilador
 El compilador que usaremos es el git bash que permite correr programas de c y c++, para compilar debemos escribir en la terminal el siguiente comando:

     gcc src/main.c -o output/main.exe

**¿qué hace un compilador?**

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


## **Mi Primer Codigo**

El primer codigo de este curso va a ser el ***"Hello world"***.

Para este codigo usaremos la libreria ***stdio.h***, la cual se a�ade usando ***#include<>***.

Para la funcion **main** se usara la funcion ***int*** como se muestra a continuaci�n:


**Codigo**
___

```c
#include <stdio.h>

int main()
{
	printf("Hello World!\n");

	return (0);
}
```

# 8 Algoritmo, estructura de datos y programas

## Algoritmia

***la algoritmia es el camino para resolver problemas***

1. Problema
2. Solución

    Algoritmos (pseuducódigo)

    Diagrama de flujo

    Código (debuggin)

    Traza (trace) - prueba de escritorio+

1. **PROBLEMA**: ¿Determinar el ára de un rectángulo?
2. **SOLUCIÓN**: areaRectangulo = largo * ancho (metros)
    1. **ALGORITMO** (pseudocódigo)
    ```c
        printf("introduzca longitud");
        scanf("%i",&long);
        printf("introduzca anchura");
        scanf("%i",&anch);
        area=long*anch;
        printf("%i",&area);
    ```
    2. **DIAGRAMA DE FLUJO**

    ![Diagrama](C:\Users\fabia\Desktop\ProgramaciónI\markdown\include\diagrama1.PNG)

# 9-10 Analisis de algoritmos 1

1. **PROBLEMA**: Determinar el mayor de 2 números
2. **SOLUCIÓN**: 10, 30, 5
    **VARIABLES**: a=10, b=30, c=5
    1. **ALGORITMO** (pseudocódigo)
    ```c
        Imprimir "Ingrese el primer valor: "
        Leer a
        Imprimir "Ingrese el segundo valor: "
        Leer b
        Imprimir "Ingrese el tercer valor: "
        Leer c
        Si (a>=b) y (a>=c)
        imprimir "el mayor valor es: " a
        terminar
        Si (b>=a) y (b>=c)
        imprimir "el mayor valor es: " b
        terminar
        Si (c>=a) y (c>=b)
        imprimir "el mayor valor es: " c
        terminar
    ```
    2. **DIAGRAMA DE FLUJO**
    - ### Diagrama de control de flujo.

Es secuencial, cuando se ejecuta en una sola linea, es condicional cuando lleva el if, if-else, if-else if, se ejecutara de una forma u otra dependiendo la condicional. Es de control cuando tenemos un ciclo o bucle, es decir, una condicional, ej: while "condicion", for, do-while. Usualmente a los apuntes se los llama "chuletas" xd.

    ![Diagrama2](C:\Users\fabia\Desktop\ProgramaciónI\markdown\include\diagrama2.PNG)

# 11 Conceptos básicos y estructura general de un programa

El uso del lenguaje C, se enfoca en la programacion estructurada, en cambio el C++, se usa para programacion orientada a objetos. La clase se enfocara en el lenguaje C.
Unix fue la base para la creacion de C.
La tipificacion de datos consiste en definiciones que ayudan a definir el tipo de datos, como por ejemplo, int, float, char, bool etc.
El control de flujo es como se van a manejar los datos, es decir, su comportamiento, como por ejemplo:  

```C
    if-else
    for o for(n)
    while(<,>,=)
    do (<,>,=), break, switch 
```

Son condicionales para que funcione de x forma un archivo, (son palabras reservadas que no se pueden usar en otro lugar).

El lenguaje de maquina consiste en una serie de codigo binario que lo interpreta la computadora, y el lenguaje natural son las palabras mismas.

El compilador transforma de lenguaje humano a lenguaje de maquina, pasando por un proceso de verificacion.

El estandar ANSI es una organizacion que crea estandares para cosas usadas.

Los headers, o coleccion de encabezadores, son scribs hechos previamente, los cuales puedes ser importados a otras librerias, usualmente van al inicio del archivo.

Las funciones (return) retorna un valor, y procedimientos son acciones que se dan, pero no retorna nada, son acompañantes del control de flujo.

El ; es donde acaba la instruccion del codigo, y da inicio una nueva orden.

Se podria decir que uno de los problemas de C y C++, es que no se lo suele usar para desarrollar paginas web.

Main es desde donde empieza a compilar la compu.

El printf es para que muestre los caracteres en la consola, el stdio es la libreria que nos permite eso.

# 12 Tipos, operadores y expresiones

Existen varios tipos de datos, los cuales sirven para definir variables, en cambio los caracteres sirven para guardar datos, ej: char caracter = '1', cada casillero ocupa 1 byte de espacio.
Los int tiene varios casilleros definidos, no como el char que solo tiene un casillero.
Un arrat, o vector es un caracter al que se le puede asiganr un numero de casilleros, para poner como caracter una palabra, en el caso que no se defina la memoria a usarse, se puede poner un caracter de cualquier longitud, simepre y cuando la RAM lo permita, por ejemplo: char nombre [] =, los espacios cuentan como caracteres.
- Entradas y Salidas:

El printf nos sirve para mostrar datos, mientras que el scanf recopila los datos de las variables, %d para datos numericos, %s para vectores de tipo char, %c para caracteres.

En los vectores, o llamados array se define la cantidad de cifras o caracteres que van haber, siempre se empieza a contar desde el 0, ej:

int numeros[3];
numeros[0] = 1;
numeros[1] = 5;
numeros[2] = 4;

return(0)

El arterisco *, nos sirve para guardar varios caracteres. El char solo nos ayuda a guardar una cadena de caracteres.

# 14 Array

Los arrays son variables estructuradas, donde cada elemento se almacena de forma
consecutiva en memoria.
Las cadenas de caracteres son declaradas en C como arrays de caracteres y permiten la
utilización de un cierto número de notaciones y de funciones especiales. 

El formato para declarar un array unidimensional es:
tipo nombre[n];
donde: n >= 1
Para acceder a un elemento del array:
nombre[i];
donde: 0 <= i < n
Por ejemplo, la declaración:
int A[4];
define un array de tipo entero de dimensión 4. Y ya podríamos acceder al primer
componente del array por medio de: A[0], al segundo elemento por: A[1] y al último
elemento por A[3].
En C, un array se utiliza básicamente cuando queremos tener, por ejemplo, una
secuencia de números reunidos en una sola variable.
Para inicializar un array, podemos hacer lo siguiente:
1
```c
for (i = 0; i< 4; i++)
 A[i] = i;
```
Otra manera de inicializar un array es asignándole los valores iniciales entre llaves de la
siguiente:
```c
int A[4] = {0, 1, 2, 3};
```
Si no se inicializa explícitamente el array no se puede estar seguro del valor que
contienen los elementos del mismo. 

**Ejemplo**

```C
#include <stdio.h>
#include <string.h>
//#define TAM =20

int main( )
{
    char Nombre[20] = "pat_mic";

    printf("\n La cadena es: %s ", Nombre);
    printf("\n La cadena es: %20s ", Nombre);
    printf("\n La cadena es: %-20s ", Nombre);
    printf("\n La cadena es: \r %s ", Nombre);

    int len = strlen(Nombre);
    printf("\n La long es: %i ", len);

    printf("Salida for: \n");
    for (int i = 0; i < strlen(Nombre); i++)
        printf("\n %c ", Nombre[i]);

    int i=0;
    printf("Salida while: \n");
    while (i < len)   // Nombre[i] != '\0'
    {
        printf("\n %c ", Nombre[i]);
        i++;
    }
    
    i=0;
    printf("Salida while2: \n");
    while (Nombre[i] != '\0')  
    {
        printf("\n %c ", Nombre[i++]);
    }
    return 0;
}

```
# 15 Estructuras y uniones 
En las estructuras de control, podemos incluir a los procedimientos, como void, ej: void Fabian().

El procedimiento con parametros, es un void, pero se declara una variable, ej: void Fabian(hola).

En una funcion se declara primero un tipo de dato, seguido del nombre del procedimiento.

La funcion con parametros, es el tipo de dato, pero se declara una variable, ej: <numero> Fabian(hola).

El tipo de dato es la clasificacion que dio el mismo sistema a ciertos tipos de datos.

Una funcion busca hacer un calculo y devolver un valor, nunca van con el void, y al final el return.

!= diferente de, % sobrante de, usleep es para retrasar la velocidad de procesamiento del codigo.

```c
    #include <stdio.h>

    // PROCEDIMIENTOS : void

    /*  Comentario de varias lineas
    este es un codigo permite el calcula de la tabla de conversion de temperatura
    */
    // PROCEDIMIENTOS 
    void tableTemperaturaWhile( )
    {
        // Declación de variables
        int fahr, celsius, lower, upper, step;
        
        // Inicialización de variables
        lower = 0 ;     /* límite inferior de la tabla de temperaturas */
        upper = 300;    /* límite superior */
        step  = 20 ;    // tamaño del incremento
        fahr  = lower;
        
        printf("fahr \t celsius \n");

        //Buble repetitivos
        while (fahr <= upper)
        {
            celsius = 5 * (fahr - 32) / 9;
            printf("%d \t %d \n", fahr, celsius);
            fahr = fahr + step;
        }

        // fahr   celsius 
        // 0   xx
        // 20
        // 40
        // 60
        // ..
        // 300
        // 320  .... no se ejecuto
    }

    //PROCEDIMIENTOS con parametros
    void tableTemperaturaWhileParam( int _step, int _upper)
    {
        // Declación de variables + Inicialización
        int lower   = 0 ;         /* límite inferior de la tabla de temperaturas */
        int upper   = _upper;     /* límite superior */
        int step    = _step ;     // tamaño del incremento
        int fahr    = lower;
        int celsius = 0;

        printf("fahr \t celsius \n");
        //Buble repetitivos
        while (fahr <= upper)
        {
            celsius = 5 * (fahr - 32) / 9;
            printf("%d \t %d \n", fahr, celsius);
            fahr = fahr + step;
        }
    }

    void main( )
    {
        tableTemperaturaWhile( );
        printf(" ----------------- \n");
        tableTemperaturaWhileParam( 60, 300);
    }
```
# 16 Series-Bucles

- ### Series

El for es un poco mas estricto, es decir, solo se ejecuta algo secuencial, mientas que el while se ejecuta en base a una serie de repeticiones, como por ejemplo al hacer una condicion

El en while siempre poner un contador, un operador ternario es un proceso para simplificar codigo, tiene 3 partes: la condicion, el entonces y el caso contrario, ?=if, :=else.

El %d es para numeros, el %c es para caracteres, /r es para que los caracteres se presenten en un mismo lado.

```c
#include <stdio.h>

void generarSerieSigno(int nroTerminos)
{
    for (int i = 0; i < nroTerminos; i++)
        printf("+ ");
}

void generarSerieSignoAlternos(int nroTerminos)
{
    for (int i = 0; i < nroTerminos; i++)
    {
        if(i%2==0)
            printf("+ ");
        else
            printf("- ");
    }
}

void showCuadrado(int tamano){
    for (int f = 0; f < tamano; f++)
    {
        for (int c = 0; c < tamano; c++)
            if((f==0) || (c==0) || (f==tamano-1) || (c==tamano-1))
                printf("+ ");
            else
                printf("  ") ;
        printf("\n");
    }
}
void showCuadradoSignoAlterno(int tamano){
    char car = '+';
    //int con=0;
    for (int f = 0; f < tamano; f++)
    {
        for (int c = 0; c < tamano; c++)
        {
            car = ((c+f)%2==0)?'+':'-';
            //car = ((con++)%2==0)?'+':'-';
            if((f==0) || (c==0) || (f==tamano-1) || (c==tamano-1))
                    printf("%c ",car);
            else
                printf("  ") ;
        }
        printf("\n");
    }
}

int main(void)
{
    int nroSigno=0;

    printf("Ingrese cantidad de signos: ");
    scanf("%i", &nroSigno);

    // generarSerieSigno(nroSigno);
    // printf("\n\n");
    // generarSerieSignoAlternos(nroSigno);    
    // printf("\n\n ");
    // showCuadrado(nroSigno);
    showCuadradoSignoAlterno(nroSigno);
    return 0;
}
```

# 17-18-19-20 Archivos
## Archivos o ficheros de texto

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

fputc, para imprimir un caracter, fputs para una cadena de caracteres


 
# 21 C++

Para C++, para imprimir, ponemos la palabra cout <<" "<<, para salto de linea, usamos el endl
Para guardar en consola, solo tendremos que poner cin, con los simbolos al lado contrario, ej: cin >> a;
