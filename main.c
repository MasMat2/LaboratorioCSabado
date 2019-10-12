#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	
	
	//Pedir entrada al usuario y guardarla en la vairable mana
	printf("Ingresa un palindromo: ");
	gets(mana);
	
	//Recorrer cadena simultaneamnete de incio a final y de final a incio
	//Revisar que cada par de caracreres sea el mismo
	//Si son diferenrtes el valor bandera sera 0 y se quedara en 0
	for(i=0;i<strlen(mana)/2;i++){
		if(mana[i]!=mana[strlen(mana)-i-1]){
			isPal = 0; 
		}
	}
	//Si el valor bandera es 1 la cadena es palindromo, si es 0 no es palindromo
	printf("La frase introducida ");
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
	//counter para contabilizar cada letra del arreglo abs
	int j;
	char abc[26]="abcdefghijklmnopqrstuvwxyz";
	char text[' '];
	int counter[26]={};
	
	//Pedir frase y guardar entrada en variable text
	printf("\n\nIngresa una frase: ");
	gets(text);
	
	//Contar el numero de letras de cada tipo, recorriendo el texto y comparando cada letra con otro arreglo
	//Si la letra de la cadena es igual la letra del arreglo en el indice j; sumar 1 al indice j del arreglo que contabiliza las letras
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
		printf("\t%c: %d", abc[i], counter[i]);
	}
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
