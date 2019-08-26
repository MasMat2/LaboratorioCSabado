#include <stdio.h>
#include <stdlib.h>
/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 20/10/1998
*grupo:
*Horario: sabado 9am 11am
*Matricula: 1679573
*/

int main(int argc, char *argv[]) {
	float x, funcion1;
	printf("\nIngresar el valor de x:");
	scanf("%f", &x);
	funcion1 = ((x-1)/4)-((x-5)/36);
	printf("\nCalculo1: %.2f\n", funcion1);
	return 0;
}
