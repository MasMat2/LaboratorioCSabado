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
	//Declarar arreglo de longitud 24
	int numeroDeCoches[24], r;
	int i;
	//Llenar el arreglo
	for(i=0;i<24;i++){
		numeroDeCoches[i]=i+1;
	}
	//Guardar el valor 57 en la posicion 2 del arreglo
	r=2;
	numeroDeCoches[r] = 57;
	printf("El numero de coches en la hora %d es de %d", r, numeroDeCoches[r]);
	//Guardar el valor 57 en la posicion 2 del arreglo
	r=21;
	numeroDeCoches[r] = 57;
	printf("\nEl numero de coches en la hora %d es de %d", r, numeroDeCoches[r]);
	//**************ACTIVIDAD2*****************
	//Declarar e inicializar variables A=8 y B=2
	int A, B;
	A=8;
	B=4;
	//Declarar r (el indice del arreglo) igual a A/B
	r=A/B;
	//Guardar el valor 57 en el indice A/B
	numeroDeCoches[r] = 57;
	printf("\nEl numero de coches en la hora %d es de %d", r, numeroDeCoches[r]);
	printf("\n\n");
	system("pause");
	return 0;
}
