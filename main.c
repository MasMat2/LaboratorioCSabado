#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 26/10/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

int main(int argc, char *argv[]) {
	
	//*************Actividad1*********
	
	//Definir la cadena de entrada(org) y las vocales
	char org[' '];
	char aei[' ']="aeiouAEIOU";
	int i, j;
	int counter;
	
	//Apuntadores para recorrer cadenas
	char *p, *voc;
	
	
	//Obtener cadena
	printf("Ingrese una cadena: \n");
	fflush(stdin);
	gets(org);
	
	//Posicionar apuntador al inicio de la cadena
	p=org;
	for(i=0;i<strlen(org);i++){
		//Loop interno que recorrea aei, para comparar cada elemento con *p y ver si *p es igual a una vocal
		voc = aei;
		for(j=0;j<strlen(aei);j++){
			//Si es igual a una vocal suma uno al contador y termina el loop
			if(*p==*voc){
				counter += 1;
				break;
			}
			voc++;
		}
		p++;
	}
	
	printf("El numero de vocales en la cadena es: %d\n", counter);
	//*****************Actividad2***************
	
	//Definir de entrada y suma
	int a;
	int b;
	int *A;
	int *B;
	int suma;
	
	//Obtener valors del usuario
	printf("Ingresa un entero: ");
	scanf("%d", &a);
	printf("Ingresa el segundo entero: ");
	scanf("%d", &b);
	
	A = &a;
	B = &b;
	suma = *A + *B;
	printf("La suma es: %d\n", suma);
	
	system("pause");
	return 0;
}
