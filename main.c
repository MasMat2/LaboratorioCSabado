#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 12/10/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

int is_prime(int n);

int main(int argc, char *argv[]) {
	//**************ACTIVIDAD1*****************
	
	//Declarar variable en la caul se almacenara la entrada del usuario
	int i;
	printf("Para determinar si el numero es primo ingresa ese numero: ");
	scanf("%d", &i);
	switch(is_prime(i)){
		case 0:
			printf("El numero no es primo");
			break;
		case 1:
			printf("El numero es primo");
			break;
	}
	printf("\n");
	
	
	system("pause");
	return 0;
}

int is_prime(int n){
	//Revisar si el numero es trivialmente primo
	if(n<=3){
		//Reresar 1 si el numero es trivialmente primo es decir mayor a 1 y menor o igual a 3
		return n>1;
	}
	
	//Regresar 0 si es divisible entre 2 o 3
	else if(n%2==0 || n%3==0){
		return 0;
	}
	
	//Si el numero no es trivialmente primo y tampoco es divisible entre 2 o 3, checar si es divisble entre numeros mayores a 2 y 3
	int i=5;
	//Como la mitad de los factores de un numero siempre se encuentran antes de la raiz cuadrada de este, revisar si tiene factores antes de i=sqrt(n), o i*i = n
	while(i*i<n){
		//Revisar si n es divisble entre numeros que no sean multiplos de 2 o 3
		if(n%i==0 || n%(i+2)==0){
			return 0;
		}
		i += 6;
	}
	return 1;
}
