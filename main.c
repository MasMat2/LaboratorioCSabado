#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 4

/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 09/11/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

int main(int argc, char *argv[]) {
	struct coordinates{
		int latitude;
		int longitude;
	} places[SIZE], *as_latitude[SIZE], *as_longitude[SIZE];

	int i;
	for(i=0;i<SIZE;i++){
		printf("\nLugar %d\n", i);
		printf("\tIngresa la latitude: ");
		scanf("%d", &places[i].latitude);
		printf("\tIngresa la longitud: ");
		scanf("%d", &places[i].longitude);
	}

	//Cada puntero i de la tabla as_latitude, apuntara a una estructura en places
	//as_latitude estara ordenado en orden ascendente por latitud
	//Cada puntero i de la tabla as_longitude, apuntara a una estructura en places
	//as_longitude estara ordenado en orden ascendente por longitud

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
	system("pause");
	return 0;
}
