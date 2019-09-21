#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 21/09/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

int main(int argc, char *argv[]) {
	//**************ACTIVIDAD1*****************
	int i;
	float cal, mean, sum_cal=0;
	
	//Rutina para obtener la sumatoria de calificaciones
	printf("\nPara calcular el promedio y si la materia fue aprobada o no ingrese los siguientes datos:\n");
	for(i=1; i<11; i++){
		printf("Ingresar la calificacion del parcial %d: ", i);
		scanf("%f", &cal);
		sum_cal += cal;
	}
	//Rutina para obtener e imprimir el promedio
	mean = sum_cal/10;
	printf("\nEl promedio final del alumno es de %.2f", mean);
	
	//Rutina que calcula e imprime si el promedio es aprobatorio o no
	if(mean>=7){
		printf("\nEl alumno aprobo");
	}
	else{
		printf("\nEl alumno no aprobo");
	}
	printf("\n*****************");
	//**************ACTIVIDAD2*****************
	int base, exp,h;
	long int pot=1;
	
	//Rutina para obtener la base y el exponente del usuario
	printf("\n\nPara calcular la potencia de un numero ingrese: ");
	printf("\nLa base: ");
	scanf("%d", &base);
	printf("El exponente: ");
	scanf("%d", &exp);
	
	//Rutina para calcular la potencia
	for(h=0; h<exp; h++){
		pot = pot*base;
	}
	//Imprimir el resultado del calculo
	printf("\nEl numero %d a la %d (%d^%d) es igual a %d", base, exp, base, exp, pot);
	printf("\n\n");
	system("pause");
	return 0;
}
