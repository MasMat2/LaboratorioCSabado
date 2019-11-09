#include <stdio.h>
#include <stdlib.h>

#define SIZE_NAME 30
#define SIZE 3

/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 09/11/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

int main(int argc, char *argv[]) {

	struct picture_info{
		char name[SIZE_NAME];
		int date_time;
	} pictures[SIZE], *pictures_pointer[SIZE];

	//LLenar estuctura pictures
	int i;
	for(i=0;i<SIZE;i++){
		getchar();
		printf("\nFoto %d", i);
		printf("\n\tNombre: ");
		fflush(stdin);
		fgets(pictures[i].name, SIZE_NAME, stdin);
		printf("\tIngresa fecha: ");
		scanf("%d", &pictures[i].date_time);
	}


	//Cada puntero i de la tabla pictures_pointer apuntara a la estructura pictures[i]
	for(i=0;i<SIZE;i++){
		pictures_pointer[i] = &pictures[i];
	}

	//Imprimir los informacion de las fotos desde la tabla de apuntadores
	for(i=0;i<SIZE;i++){
		printf("Foto\n\t%s %d\n", pictures_pointer[i]->name, pictures_pointer[i]->date_time);
	}
	system("pause");
	return 0;
}
