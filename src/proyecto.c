#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <unistd.h>

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

Empleado obtenerDatos();
void imprimirNuevos(Empleado obrero[10], int registros);
void actualizarHijos(Empleado obrero[10], int registros);
void imprimirNomina(Empleado obrero[10], int registros);
float gastosBonos(Empleado obrero[10],int registros);

int main(){
    int i, opcion, salir, registros=0,totalEmpleados=0;
    float bonos;
    Empleado obreros[10];
    do{
        printf("PROYECTO NOMINA\n");
        printf("\n");
        printf("1. Ingresar empleado\n");
        printf("2. Imprimir empleados nuevos\n");
        printf("3. Actualizar hijos de empleado\n");
        printf("4. Imprimir nomina\n");
        printf("5. Calcular gastos en bonos\n");
        printf("6. Salir\n");
        printf("Digite la opcion seleccionada: ");
        scanf("%d",&opcion);
        printf("\n");
        if(opcion==1){
                printf("\nregistros: %d \n",registros);
                obreros[registros]=obtenerDatos();
                registros=registros+1;
                totalEmpleados=totalEmpleados+1;
        }
        if(opcion==2){
                imprimirNuevos(obreros,registros);
                printf("\n");
        }
        if(opcion==3){
                actualizarHijos(obreros, registros);
                printf("\n");
        }
        if(opcion==4){
               imprimirNomina(obreros, registros);
                printf("\n");
        }
        if(opcion==5){
                bonos=gastosBonos(obreros,totalEmpleados);
                printf("\ndinero total que debe gastar la empresa en bonos que otorga por tener hijos: %.2f",bonos);
                printf("\n");
        }
        printf("\ntotal empleados registrados= %d\n",totalEmpleados);

    }while(opcion<6);
return 0;
}
Empleado obtenerDatos(){
    int i;
    Empleado trabajador;
    printf("Ingrese identificador del empleado: ");
    scanf("%d",&trabajador.identificador);
    fflush(stdin);
    printf("Ingrese nombre del empleado: ");
    gets(trabajador.nombre);
    fflush(stdin);
    printf("Ingrese anio de ingreso a la institucion: ");
    scanf("%d",&trabajador.anioIngreso);
    fflush(stdin);
    printf("Ingrese anio de nacimiento: ");
    scanf("%d",&trabajador.anioNacimiento);
    fflush(stdin);
    printf("Ingrese salario: ");
    scanf("%d",&trabajador.salario);
    fflush(stdin);
    printf("Ingrese cantidad de hijos: ");
    scanf("%d",&trabajador.numeroHijos);
    fflush(stdin);
    printf("\n");

    if(trabajador.numeroHijos > 0 && trabajador.numeroHijos < 5){
        for(int i=0;i<trabajador.numeroHijos;i=i+1){
            printf("\nDatos de hijo %d",i);
            printf("\nID: ");
            scanf("%d",&trabajador.hijos[i].identificador);
            fflush(stdin);

            printf("Nombre: ");
            scanf("%s",trabajador.hijos[i].nombre);
            fflush(stdin);

            printf("Anio de nacimiento: ");
            scanf("%d",&trabajador.hijos[i].anioNacimiento);
            fflush(stdin);

        }

    }
return trabajador;
}
void imprimirNuevos(Empleado obrero[10], int registros){
    int i;
    for(i=0; i<registros; i++){
        if((2022-obrero[i].anioIngreso)<=5){
            printf("Identificador del empleado %d: %d",i,obrero[i].identificador);
            printf("\nNombre del empleado %d: %s",i, obrero[i].nombre);
            printf("\nAnio de ingreso a la instituci�n %d: %d", i,obrero[i].anioIngreso);
            printf("\nAnio de nacimiento %d: %d",i,obrero[i].anioNacimiento);
            printf("\nSalario %d: %d",i, obrero[i].salario);
            printf("\nCantidad de hijos %d: %d",i,obrero[i].numeroHijos);
            printf("\n");
        }
    }
}
void actualizarHijos(Empleado obrero[10], int registros){
    int i, aux, n;
    printf("\n");
    printf("Ingrese identificador del empleado: ");
    scanf("%d", &aux);
    for(i=0;i<registros; i++){
        if(aux==obrero[i].identificador){
            n=obrero[i].numeroHijos;
            printf("\nIngrese identificador de nuevo hijo de %s: ", obrero[i].nombre);
            scanf("%d", &obrero[i].hijos[n].identificador);
            fflush(stdin);

            printf("\tIngrese nombre de nuevo hijo: ");
            gets(obrero[i].hijos[n].nombre);
            fflush(stdin);

            printf("\tIngrese anio de nacimiento de nuevo hijo: ");
            scanf("%d",&obrero[i].hijos[n].anioNacimiento);
            fflush(stdin);

            obrero[i].numeroHijos=obrero[i].numeroHijos+1;
        }
    }
}
void imprimirNomina(Empleado obrero[10], int registros){
    int i,j;
    printf("\nBASE DE DATOS\n");
    for(i=0; i<registros; i++){
        printf("%d: %d\t",i,obrero[i].identificador);
        printf("%s\t",obrero[i].nombre);
        printf("%d\t",obrero[i].anioIngreso);
        printf("%d\t",obrero[i].anioNacimiento);
        printf("%d\t",obrero[i].salario);
        printf("%d\t",obrero[i].numeroHijos);
        for(j=0;j<obrero[i].numeroHijos; j++){
            printf("%s - ", obrero[i].hijos[j].nombre);
        }
        printf("\n");
    }
}
float gastosBonos(Empleado obrero[10],int registros){
    int i,j,edad=0,cont=0;
    float bono=1,total=0;
    for(i=0;i<registros;i++){
        for(j=0;j<obrero[i].numeroHijos;j++){
            edad=2022-obrero[i].hijos[j].anioNacimiento;
            printf("\n edad: %d",edad);
            if(edad<10){
                cont=cont+1;
                bono=obrero[i].salario*cont;

            }
        }
        total=total+bono;

        cont=0;
        edad=0;
    }

    return total;
}