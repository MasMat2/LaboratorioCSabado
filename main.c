#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 100

int main(int argc, char *argv[]) {
	FILE *of, *ef;
	char orig[]="origen.txt";
	char salida[]="archivo_alreves.txt";
	char corig[STR_SIZE];
	char reves[STR_SIZE];
	int i;
	
	of = fopen(orig, "r");
	ef = fopen(salida, "w");
	fgets(corig, STR_SIZE, of);
	
	for(i=0;i<strlen(corig);i++){
		reves[i] = corig[strlen(corig)-1-i];
	}
	
	fprintf(ef, "%s", reves);
	//**************Actividad 2***********
	FILE *nf, *sf;
	int a, b;
	char num[]="nums.txt";
	char sum[]="suma.txt";
	nf = fopen(num, "r");
	sf = fopen(sum, "w");
	
	fscanf(nf, "%d %d", &a, &b);
	fprintf(sf, "La suma de %d y %d es %d", a, b, a+b);
	system("pause");
	return 0;
}
