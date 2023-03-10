#include<iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

struct nodo{
    int nro;
    string armamento;
    struct nodo *izq, *der;
};

typedef struct nodo *ABB;
/* es un puntero de tipo nodo que hemos llamado ABB, que ulitizaremos
   para mayor facilidad de creacion de variables */

ABB crearNodo(int x, string armas)
{
     ABB nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
     nuevoNodo->armamento = armas;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}
void insertar(ABB &arbol, int x, string armas)
{
    int cont1=0,cont2=0,cont3=0,cont4=0;
    arbol->armamento;
     if(arbol==NULL)
     {
           arbol = crearNodo(x,armas);
           
     }
     else if(x < arbol->nro)
          insertar(arbol->izq, x,armas);
     else if(x > arbol->nro)
          insertar(arbol->der, x,armas);
}

// void preOrden(ABB arbol)
// {
//      if(arbol!=NULL)
//      {
//           cout << arbol->nro <<" ";
//           preOrden(arbol->izq);
//           preOrden(arbol->der);
//      }
// }

// void enOrden(ABB arbol)
// {
//      if(arbol!=NULL)
//      {
//           enOrden(arbol->izq);
//           cout << arbol->nro << " ";
//           enOrden(arbol->der);
//      }
// }

// void postOrden(ABB arbol)
// {
//      if(arbol!=NULL)
//      {
//           postOrden(arbol->izq);
//           postOrden(arbol->der);
//           cout << arbol->nro << " ";
//      }
// }

void verArbol(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     cout<< arbol->nro <<endl;

     verArbol(arbol->izq, n+1);
}

int main()
{
    ABB arbol = NULL;   // creado Arbol

    int n;  // numero de nodos del arbol
    int x; // elemento a insertar en cada nodo
    string armas;//armas de cada coordenada

    cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";

    cout << " Numero de nodos del arbol:  ";
    cin >> n;
    cout << endl;

    for(int i=0; i<n; i++)
    {
        cout << " Numero del nodo " << i+1 << ": ";
        cin >> x;
        cout << " Armamento del nodo " << i+1 << ": ";
        cin >> armas;
        insertar( arbol, x, armas);
    }

    cout << "\n Mostrando ABB \n\n";  verArbol( arbol, 0);
    cout << "\n Recorridos del ABB";
    // cout << "\n\n En orden   :  ";   enOrden(arbol);
    // cout << "\n\n Pre Orden  :  ";   preOrden(arbol);
    // cout << "\n\n Post Orden :  ";   postOrden(arbol);
    cout << endl << endl;
    return 0;
}
