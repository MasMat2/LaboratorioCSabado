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
	//***
	//ACT1
	int a, b;
	printf("Para calclualar el mayor de dos numeros introduzca:");
	printf("\nEl primer numero: ");
	scanf("%d", &a);
	printf("El segundo numero: ");
	scanf("%d", &b);
	printf("\nEl numero mas grande entre %d y %d es ", a, b);
	if (a>b){
		printf("%d", a);
	}
	else{
		printf("%d", b);
	}
	printf("\n\n");
	//***
	//ACT2
	a=5; 
	b=3; 
	int c=-12;
	// Problema 1
	printf("\n---------------------");
	printf("\nProblema 1\n");
	if (a>3){
		printf("A es mayor a 3");
	}
	else{
		printf("A es menor a 3");
	}
	//Problema 2
	printf("\nProblema 2\n");
	if (a>c){
		printf("A (%d) es mayor a C (%d)", a,c);
	}
	else{
		printf("A (%d) es menor a C (%d)", a, c);
	}
	// Problema 3
	printf("\nProblema 3\n");
	if(b!=c){
		printf("B es diferente de C");
	}
	else{
		printf("B es igual a C"); 
	}
	// Problema 4
	printf("\nProblema 4\n");
	if (a==3){
		printf("A es igual 3");
	}
	else {
		printf("A no es igual a 3");
	}
	// Problema 5
	printf("\nProblema 5\n");
	if (a*b==15){
		printf("El producto de A por B es 15");
	}
	else{
		printf("El producto de A por B no es 15");
	}
	// Problema 6
	printf("\nProblema 6\n");
	if ((c/b)<a){
		printf("El cociente de C entre B es mayor a A");
	}
	else{
		printf("El cociente de C entre B es menor a A");
	}
	// Problema 7
	printf("\nProblema 7\n");
	if ((c/a)==-10){
		printf("El cociente de C entre A es igual a -10");
	}
	else{
		printf("El cociente de C entre A es diferente a -10");
	}
	// Problema 8
	printf("\nProblema 8\n");
	if ((a+b+c)==5){
		printf("La sumatoria de A, B y C es 5");
	}else{
		printf("La sumatoria de A, B y C no es 5");
	}
	// Problema 9
	printf("\nProblema 9\n");	
	if (((a+b)==8 )&&(a-b==2)){
		printf("A mas B es igual a 8 y A menos B es igual a 2");
	}
	else{
		printf("A mas B es diferente a 8 o A menos B es diferente a 2");
	}
	// Problema 10
	printf("\nProblema 10\n");
	if ((a+b == 8) || (a-b == 6)){
		printf("A mas B es igual a 8 o A menos B es igual a 6");
	}
	else{
		printf("A mas B es diferente de 8 y A menos B es diferente de 6");
	}
	// Problema 11
	printf("\nProblema 11\n");
	if ((a>3)&&(b<3)&&(c<3)){
		printf("A es mayor a 3 y B es menor a 3 y C es menor a 3");
	}	
	else{
		printf("A es menor a 3 o B es mayor a 3 o C es mayor a 3");
	}
	printf("\n---------------------");
	//***
	//ACT EXTRA
	printf("\nIngresa a: ");
	scanf("%d", &a);
	printf("Ingresa b: ");
	scanf("%d", &b);
	printf("Ingresa c: ");
	scanf("%d", &c);
	// Problema 1
	printf("\n---------------------");
	printf("\nProblema 1\n");
	if (a>3){
		printf("A es mayor a 3");
	}
	else{
		printf("A es menor a 3");
	}
	//Problema 2
	printf("\nProblema 2\n");
	if (a>c){
		printf("A (%d) es mayor a C (%d)", a,c);
	}
	else{
		printf("A (%d) es menor a C (%d)", a, c);
	}
	// Problema 3
	printf("\nProblema 3\n");
	if(b!=c){
		printf("B es diferente de C");
	}
	else{
		printf("B es igual a C"); 
	}
	// Problema 4
	printf("\nProblema 4\n");
	if (a==3){
		printf("A es igual 3");
	}
	else {
		printf("A no es igual a 3");
	}
	// Problema 5
	printf("\nProblema 5\n");
	if (a*b==15){
		printf("El producto de A por B es 15");
	}
	else{
		printf("El producto de A por B no es 15");
	}
	// Problema 6
	printf("\nProblema 6\n");
	if ((c/b)<a){
		printf("El cociente de C entre B es mayor a A");
	}
	else{
		printf("El cociente de C entre B es menor a A");
	}
	// Problema 7
	printf("\nProblema 7\n");
	if ((c/a)==-10){
		printf("El cociente de C entre A es igual a -10");
	}
	else{
		printf("El cociente de C entre A es diferente a -10");
	}
	// Problema 8
	printf("\nProblema 8\n");
	if ((a+b+c)==5){
		printf("La sumatoria de A, B y C es 5");
	}else{
		printf("La sumatoria de A, B y C no es 5");
	}
	// Problema 9
	printf("\nProblema 9\n");	
	if (((a+b)==8 )&&(a-b==2)){
		printf("A mas B es igual a 8 y A menos B es igual a 2");
	}
	else{
		printf("A mas B es diferente a 8 o A menos B es diferente a 2");
	}
	// Problema 10
	printf("\nProblema 10\n");
	if ((a+b == 8) || (a-b == 6)){
		printf("A mas B es igual a 8 o A menos B es igual a 6");
	}
	else{
		printf("A mas B es diferente de 8 y A menos B es diferente de 6");
	}
	// Problema 11
	printf("\nProblema 11\n");
	if ((a>3)&&(b<3)&&(c<3)){
		printf("A es mayor a 3 y B es menor a 3 y C es menor a 3");
	}	
	else{
		printf("A es menor a 3 o B es mayor a 3 o C es mayor a 3");
	}
	printf("\n---------------------");
	printf("\n\n");
	system("pause");
	return 0;
}
