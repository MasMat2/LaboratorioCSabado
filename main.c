#include <stdio.h>
#include <stdlib.h>

	/*
	*Autor: Adrian Maximiliano Munoz Martinez
	*Fecha: 31/08/2019
	*grupo: 008
	*Horario: sabado 9am 11am
	*Matricula: 1679573
	*/

int main(int argc, char *argv[]) {
	//******ACTIVIDAD 1******
	int num, sum=0;
	char keepG;
	//Se ejecutara siempre que keepG sea diff a 's'
	do{
		printf("\nIntoduzca un numero: ");
		scanf("%d", &num);
		sum += num;
		printf("Desea continuar(s/n): ");
		//Limpia el cache antes de pedir un caracter
		fflush(stdin);
		scanf("%c", &keepG);
	}while(keepG=='s');
	printf("\nLa suma de los numeros introducidos es %d\n\n", sum);
	printf("---------------");
	//******ACTIVIDAD 2******
	int numb=0;
	//Se ejecutara siempre y cuando numb <= 100
	while (numb<=100){
		printf("\nIntroduzca un numero: ");
		scanf("%d", &numb);
		printf("Introduciste el numero %d\n", numb);
	}
	printf("\nIntroduciste un numero mayor a 100\n");
	system("pause");
	return 0;
}
