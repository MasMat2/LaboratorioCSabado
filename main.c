#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_NAME 30
#define SIZE 4

/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 09/11/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

struct coordinates{
	int latitude;
	int longitude;
};

void quick_sort(struct coordinates *array[], int min, int max, int latitude);
int new_pivot(struct coordinates *array[], int min, int max, int latitude);

int main(int argc, char *argv[]) {
	//*************Actividad1*********
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

	//*************Actividad2*********
	struct coordinates places[SIZE], *as_latitude[SIZE], *as_longitude[SIZE];
	for(i=0;i<SIZE;i++){
		printf("\nLugar %d\n", i);
		printf("\tIngresa la latitud: ");
		scanf("%d", &places[i].latitude);
		printf("\tIngresa la longitud: ");
		scanf("%d", &places[i].longitude);
	}

	//Cada puntero i de la tabla as_latitude, apuntara a una estructura en places
	//as_latitude estara ordenado en orden ascendente por latitud
	for(i=0;i<SIZE;i++){
		as_latitude[i] = &places[i];
	}
	quick_sort(as_latitude, 0, SIZE-1, 1);
	//Cada puntero i de la tabla as_longitude, apuntara a una estructura en places
	//as_longitude estara ordenado en orden ascendente por longitud
	for(i=0;i<SIZE;i++){
		as_longitude[i] = &places[i];
	}
	quick_sort(as_longitude, 0, SIZE-1, 0);

	//Orden original
	printf("\nCoordenadas en su orden original:");
	for(i=0;i<SIZE;i++){
		printf("\nLatitud: %d\tLongitud: %d", places[i].latitude, places[i].longitude);
	}

	//Orden por latitud
	printf("\n\nCoordenadas ordenadas por latitud:");
	for(i=0;i<SIZE;i++){
		printf("\nLatitud: %d\tLongitud: %d", as_latitude[i]->latitude, as_latitude[i]->longitude);
	}

	//Orden por longitud
	printf("\n\nCoordenadas ordenadas por longitud:");
	for(i=0;i<SIZE;i++){
		printf("\nLatitud: %d\tLongitud: %d", as_longitude[i]->latitude, as_longitude[i]->longitude);
	}
	printf("\n\n");
	system("pause");
	return 0;
}

void quick_sort(struct coordinates *array[], int min, int max, int latitude){
	int pivot;
	if(min>=max){
		return;
	}
	pivot = new_pivot(array, min, max, latitude);
	quick_sort(array, min, pivot-1, latitude);
	quick_sort(array, pivot+1, max, latitude);
}

int new_pivot(struct coordinates *array[], int min, int max, int latitude){
	int x, y;
	struct coordinates *aux, *pivot;
	x = min+1;
	y = max;
	pivot = array[min];
	while(x<=y){
		if(latitude){
			while((array[x]->latitude<pivot->latitude)&&(x<max)){
				x++;
			}
			while(array[y]->latitude>pivot->latitude){
				y--;
			}
		}else{
			while((array[x]->longitude<pivot->longitude)&&(x<max)){
				x++;
			}
			while(array[y]->longitude>pivot->longitude){
				y--;
			}
		}
		if(x<y){
			aux = array[x];
			array[x]=array[y];
			array[y] = aux;
		}else{
			x++;
		}
	}
	array[min] = array[y];
	array[y] = pivot;
	return y;
}
