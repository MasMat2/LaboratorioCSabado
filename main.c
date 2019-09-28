#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 28/09/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

int main(int argc, char *argv[]) {
	//**************ACTIVIDAD1*****************
	int numeroDeCoches[24], r;
	int i;
	for(i=0;i<24;i++){
		numeroDeCoches[i]=i+1;
	}
	r=2;
	numeroDeCoches[r] = 57;
	printf("El numero de coches en la hora %d es de %d", r, numeroDeCoches[r]);
	r=21;
	numeroDeCoches[r] = 57;
	printf("\nEl numero de coches en la hora %d es de %d", r, numeroDeCoches[r]);
	//**************ACTIVIDAD2*****************
	int A, B;
	A=8;
	B=4;
	r=A/B;
	numeroDeCoches[r] = 57;
	printf("\nEl numero de coches en la hora %d es de %d", r, numeroDeCoches[r]);
	printf("\n\n");
	system("pause");
	return 0;
}
