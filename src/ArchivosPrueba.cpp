#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;
typedef struct{
    int identificador;
    char nombre[50];
    int anioNacimiento;
}Hijos;

typedef struct{
    int identificador;
    char nombre[50];
    int anioIngreso;
    int anioNacimiento;
    int salario;
    int numeroHijos;
    Hijos hijos[5];
}Empleado;

void CrearArchivo(string pathFile)  //-->  datafiles/ListaAlumnos.txt
{
    string s;
    fstream f;
    f.open(pathFile, ios_base::app);

    if (f.is_open())
    {
            int i;
            Empleado trabajador;
            printf("Ingrese identificador del empleado: ");
            scanf("%d",&trabajador.identificador);
            f << trabajador.identificador << endl;
            fflush(stdin);
            printf("Ingrese nombre del empleado: ");
            gets(trabajador.nombre);
            f << trabajador.nombre << endl;
            fflush(stdin);
            printf("Ingrese anio de ingreso a la institucion: ");
            scanf("%d",&trabajador.anioIngreso);
            f << trabajador.anioIngreso << endl;
            fflush(stdin);
            printf("Ingrese anio de nacimiento: ");
            scanf("%d",&trabajador.anioNacimiento);
            f << trabajador.anioNacimiento << endl;
            fflush(stdin);
            printf("Ingrese salario: ");
            scanf("%d",&trabajador.salario);
            f << trabajador.salario << endl;
            fflush(stdin);
            printf("Ingrese cantidad de hijos: ");
            scanf("%d",&trabajador.numeroHijos);
            f << trabajador.numeroHijos << endl;
            fflush(stdin);
            printf("\n");

            if(trabajador.numeroHijos > 0 && trabajador.numeroHijos < 5){
                for(int i=0;i<trabajador.numeroHijos;i=i+1){
                    printf("\nDatos de hijo %d",i);
                    printf("\nID: ");
                    scanf("%d",&trabajador.hijos[i].identificador);
                    f << trabajador.hijos[i].identificador<< endl;
                    fflush(stdin);

                    printf("Nombre: ");
                    scanf("%s",trabajador.hijos[i].nombre);
                    f << trabajador.hijos[i].nombre<< endl;
                    fflush(stdin);

                    printf("Anio de nacimiento: ");
                    scanf("%d",&trabajador.hijos[i].anioNacimiento);
                    f << trabajador.hijos[i].anioNacimiento<< endl;
                    fflush(stdin);

                }

            }
    }
    f.close();
}

void CrearArchivo2(string pathFile)  //-->  datafiles/ListaAlumnos.txt
{
    string s;
    fstream f;

    cout << "Escibiendo en un archivo" << endl;
    f.open(pathFile, ios_base::app);

    if (f.is_open())
    {
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
    //Loading();
    CrearArchivo("texto/ListaAlumnos.txt");
    //LeerArchivo("texto/ListaAlumnos.txt");
    return 0;
}


