#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 06/10/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

int main(int argc, char *argv[]) {
	//**************ACTIVIDAD1*****************
	int ventaEmpleadoOficinaEdificio[6][10][2];
	ventaEmpleadoOficinaEdificio[2][6][1] = 4234;
	// printf("El empleado 3 de la oficina 7 del edificio numero 2 ha vendido %d", ventaEmpleadoOficinaEdificio[2][6][1]);
	//Cuantos elementos componen el array multidimensional
	//Matriz[n][m][p] numero de elementos = n*m*p
	//El numero de elementos del array es 6*10*2=120

	// Que ocurre si intentamos mostrar por pantalla un valor con un indice que no esta definido para ese array multidimensional
	//Al crear el arreglo estamos reservando un espacio de memoria en la computadora ese espacio de memoria antes fue ocupado por otro
	//programa el cual pudo haber escrito en el, cuando se crea el arreglo solo se reserva el espacio de memeoria pero no se reescriben los valores en l
	//hasta que lo hagamos explicitamente. Por lo tanto si intentamos accesar un valor que no hemos definido explicitamente vamos a obtener el valor que estaba escrito
	//en ese espacio antes de que hayamos creado el arreglo.

	//El siguiente ciclo anidado imprime todos los elementos del arreglo podemos ver que cierto elemento es 4234 este es el que definimos pero los demas pueden ser cualquier cosa.
	// int i,j,k;
	// for(i=0;i<6;i++){
	// 	for(j=0;j<10;j++){
	// 		for(k=0;k<2;k++){
	// 			printf("\n %d", ventaEmpleadoOficinaEdificio[i][j][k]);
	// 		}
	// 	}
	// }

	//**************ACTIVIDAD2*****************
	ventaEmpleadoOficinaEdificio[2][6][1] += 10;
	printf("\nEl empleado 3 de la oficina 7 del edificio numero 2 ha vendido %d", ventaEmpleadoOficinaEdificio[2][6][1]);

	printf("\n\n\n\n");
	fflush(stdin);
	getchar();
	return 0;
}
