#include <stdio.h>
#include "../lib/progressbar3.h"

int main()
{
	/*
		Nombre: Rodrigo Sebastian Haro De La Torre
		Fecha: 08/07/2022
	*/

	char correo[] = "fabian.simbana@epn.edu.ec";

	// el primer argumento es la velocidad con la que se mueve la flecha, el segundo el correo de la institucion

	showProgressBar_o(2, correo);
	return 1;
	/*
		- Issue: Dado que showProgressBar_o toma como parametro un correo electronico, pero no su longitud,
		si se da un correo mayor a 23 caracteres el codigo funcionara sin ningun problema, pero no se mostrara
		el correo completo, sino solo una parte de este. 
		- Error: Si se manda como primer parametro de showProgressbar_o un dato que no es un numero el programa
		no funcionara en ningun sentido
		- Bug: Si el correo que se da a showProgressBar_o es menor de 23 caracteres, una vez que ya lo
		haya mostrado todo empezara a imprimir datos basura de la memoria. Esto se aprecia muy bien en log.txt.
	*/
}