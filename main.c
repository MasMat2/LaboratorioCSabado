#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 12/10/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/


int main(int argc, char *argv[]) {
	//**************ACTIVIDAD1*****************
	char mana[' '];
	int i, isPal=1;
	int leftIndex, rightIndex;


	//Pedir entrada al usuario y guardarla en la vairable mana
	printf("Ingresa un palindromo: ");
	gets(mana);

	//Recorrer cadena simultaneamnete de incio a final y de final a incio
	//Revisar que cada par de caracreres sea el mismo
	//Si son diferenrtes el valor bandera(isPal) sera 0 y se quedara en 0
	leftIndex=-1;
	rightIndex=strlen(mana);
	for(i=0;i<strlen(mana);i++){
		leftIndex++;
		rightIndex--;

		//Antes de evaluar la condicion revisar que no sea un espacio, si lo es pasar al sisgueinte indice
		while(mana[leftIndex]==' '){
			leftIndex++;
		}
		while(mana[rightIndex]==' '){
			rightIndex--;
		}
		//Salir del ciclo si se reccorio toda la cadena
		if(rightIndex<0 || leftIndex>strlen(mana)-1)
			break;
		if(mana[leftIndex]!=mana[rightIndex]){
			isPal = 0;
		}
	}
	//Si el valor bandera es 1 la cadena es palindromo, si es 0 no es palindromo
	printf("\nLa frase introducida ");
	if(isPal){
		printf("es ");
	}else{
		printf("no es ");
	}
	printf("palindromo");
	//**************ACTIVIDAD2*****************
	//Declarar tres vairables
	//text para guardar la entrada del usuario
	//abc para integrar todas las letras que se van a contar
	//counter para contabilizar cada letra del arreglo abc
	int j;
	char text[' '];
	int counter[26]={0};
	char abc[26]={"abcdefghijklmnopqrstuvwxyz"};

	//Pedir frase y guardar entrada en variable text
	printf("\n\nIngresa una frase: ");
	gets(text);

	//Contar el numero de letras de cada tipo, recorriendo el texto y comparando cada letra con otro arreglo
	//Si la letra de la cadena es igual la letra del arreglo abc en el indice j; sumar 1 al indice j del arreglo que contabiliza las letras
	for(i=0;i<strlen(text);i++){
		for(j=0;j<26;j++){
			if(tolower(text[i])==abc[j]){
				counter[j]++;
			}
		}
	}
	
	//Imprimir el numero de veces que se repite cada letra recorriendo el arreglo de letras y el arreglo de contabilizaciones simultaneamente
	printf("\nNumero de veces que se repite la letra");
	for(i=0;i<26;i++){
		if(i%5==0){
			printf("\n");
		}
		printf("\t%c: %d",abc[i], counter[i]);
	}
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
