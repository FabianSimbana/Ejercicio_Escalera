#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h> // Booleanos
#include "../lib/ProgressBar.h"

// int longitudBarra = 28;
// char correo[28] = "Jefferson.chileno@epn.edu.ec";
// Rutina Principal

int main()
{
    showProgressBar_e(15);

    return 0;
}

/*
ISSUE:
Manejo de la memoria, llevarlo a lenguaje c++ para tener más herramientas que nos faciliten el trabajo

BUG:
El contador de carga tiene un bug, se tuvo que aumentar una posición al requerido para el string correo electronico

ERROR:
El error se encuentra al momeno de iterar la primera posición, no deberia imprimir la primera letra sin embargo lo esta haciendo

*/