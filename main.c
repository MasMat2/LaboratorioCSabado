#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 02/11/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

int main(int argc, char *argv[])
{

	//*************Actividad1*********

	//Definir la cadena de entrada(org) y las vocales
	char org[' '];
	char aei[' '] = "aeiouAEIOU";
	int counter = 0;

	//Apuntadores para recorrer cadenas
	char *p, *voc;

	//Obtener cadena
	printf("Ingrese una cadena: \n");
	fflush(stdin);
	fgets(org, 40, stdin);

	//Posicionar apuntador al inicio de la cadena
	for (p = org; *p != '\0'; p++)
	{
		//Loop interno que recorrea aei, para comparar cada elemento con *p y ver si *p es igual a una vocal
		for (voc = aei; *voc != '\0'; voc++)
		{
			//Si es igual a una vocal suma uno al contador y termina el loop
			if (*p == *voc)
			{
				counter += 1;
				break;
			}
		}
	}

	printf("El numero de vocales en la cadena es: %d\n", counter);
	//*****************Actividad2***************
	printf("\n\n");
	//Definir de variables y apuntadores tipo entero;
	int a;
	int b;
	int *A;
	int *B;
	int suma;

	A = &a;
	B = &b;
	//Obtener valor del usuario
	printf("Ingresa un entero: ");
	scanf("%d", A);
	printf("Ingresa el segundo entero: ");
	scanf("%d", B);

	//Sumar los datos conetnido en la direccion contenida en A y B
	suma = *A + *B;
	printf("La suma es: %d\n", suma);

	while (1)
		;
	// system("pause");
	return 0;
}
