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
	float x, funcion1, funcion2, funcion3, funcion4;
	printf("\nIngresar el valor de x:");
	scanf("%f", &x);
	funcion1 = ((x-1)/4)-((x-5)/36);
	printf("\nCalculo1: %.2f\n", funcion1);
	funcion2 = 6*(((x+1)/8)-((2*x-3)/16));
	printf("\nCalculo2: %.2f\n", funcion2);
	funcion3 = (x-(1-(x-2)/3))*2/3+1;
	printf("\nCalculo3: %.2f\n", funcion3);
	funcion4 = 2-(-2*(x+1)-(x-3)/2);
	printf("\nCalculo4: %.2f\n", funcion4);
	return 0;
}
