#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		int date_time[3];
	} pictures[SIZE], *pictures_pointer[SIZE];

	//LLenar estuctura pictures
	int i, j;
	char *aux;
	for(i=0;i<SIZE;i++){
		getchar();
		printf("\nFoto %d", i);
		printf("\n\tNombre: ");
		fflush(stdin);
		fgets(pictures[i].name, SIZE_NAME, stdin);
		if ((aux = strchr(pictures[i].name, '\n')) != NULL) *aux = '\0';
		do{
			printf("\tIngresa la fecha en el siguiente formato dia/mes/ano (01/01/00): ");
			scanf("%2d%*c%2d%*c%2d", &pictures[i].date_time[0], &pictures[i].date_time[1], &pictures[i].date_time[2]);
		}while(0);
	}


	//Cada puntero i de la tabla pictures_pointer apuntara a la estructura pictures[i]
	for(i=0;i<SIZE;i++){
		pictures_pointer[i] = &pictures[i];
	}

	//Imprimir los informacion de las fotos desde la tabla de apuntadores
	printf("\n\nReporte\n");
	for(i=0;i<SIZE;i++){
		printf("Foto %d\n\t Nombre: %s Fecha: ", i, pictures_pointer[i]->name);
		for(j=0;j<3;j++){
			printf("%d", pictures_pointer[i]->date_time[j]);
			if(j<2){
				printf("\\");
			}
			else{
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}
