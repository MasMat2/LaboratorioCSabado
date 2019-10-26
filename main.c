#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 19/10/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

int main(int argc, char *argv[]) {
	//**************ACTIVIDAD1*****************

	//Crear estructura para estudiantes
	struct Estudiante {
		char nombre[30];
		int sexo;
		int edad;
		int notas[5];
		float prom;
	};
	int num, i, j, flag=0;
	char *aux;

	//Obtener el numero de estructuras que se crearan
	printf("Ingresa la cantidad de alumnos que asisten al curso: ");
	scanf("%d", &num);

	//Crear arreglo con el numero de estructuras ingresadas por el usuario
	struct Estudiante estudiantes[num];
	//Crear estructura auxiliar para el ordenamiento de las estrucuturas dentro del arreglo
	struct Estudiante empty_es;

	//Recorrer el arreglo de las estructuras y poblar los datos
	for(i=0;i<num;i++){
		//Inicializar la variable pormedio de la estructura con 0
		estudiantes[i].prom=0;
		getchar();
		printf("Ingresa el nombre del alumno %d: ", i+1);
		fgets(estudiantes[i].nombre, 30, stdin);
		// fflush(stdin);
		// gets(estudiantes[i].nombre);
		//Usando el apuntador aux, apuntar a el caracter "\n" y cambiarlo por "\0"
		//para imprmir solamente la entrada sin imprimir un salto de linea
		if ((aux = strchr(estudiantes[i].nombre, '\n')) != NULL) *aux = '\0';

		//Validar cada uno de los datos, preguntar de nuevo si no son datos esperados
		do{
			printf("\tIngresa el sexo de %s (0-Hombre/1-Mujer): ", estudiantes[i].nombre);
			scanf("%d", &estudiantes[i].sexo);
		}while(estudiantes[i].sexo != 0 && estudiantes[i].sexo !=1);
		do{
		printf("\tIngresa la edad de de %s: ", estudiantes[i].nombre);
		scanf("%d", &estudiantes[i].edad);
	}while(estudiantes[i].edad<0);
		printf("\n");
			for(j=0;j<5;j++){
				do{
				printf("\tIngresa la calificacion %d: ", j+1);
				scanf("%d", &estudiantes[i].notas[j]);
			}while(estudiantes[i].notas[j]<0 || estudiantes[i].notas[j]>100);
			estudiantes[i].prom += estudiantes[i].notas[j]/5.0;
		}
	printf("\n");
	}

	//Ordenar er arreglo de estudiantes de acuerdo al promedio usando el algoritmo bubble sort
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(estudiantes[i].prom>estudiantes[j].prom){
				empty_es = estudiantes[i];
				estudiantes[i] = estudiantes[j];
				estudiantes[j] = empty_es;
			}
		}
	}

	//Imprimir la informacion de cada estudiante
	printf("\nInformacion de los %d estudiantes", num);
	for(i=0;i<num;i++){

		//Si el valor bandera (flag) es 1, indicar que se trata del estudiante con el promedio mas alto
		if(flag)
			printf("\n\n\nEl estudiante con el promedio mas alto es: \n");
		else
			printf("\n\n");
		//Imprimir los datos de el estudiante actual
		printf("Estudiante %d: ", i+1);
		printf("\n\t%s", estudiantes[i].nombre);
		if(estudiantes[i].sexo)
			printf("\n\t%s%s", "Sexo: ", "Mujer");
		else
			printf("\n\t%s%s", "Sexo: ", "Hombre");
		printf("\n\t%s%d", "Edad: ", estudiantes[i].edad);
		printf("\n");
		for(j=0;j<5;j++){
			printf("\n\t%s%d: %d", "Calificacion ", j+1, estudiantes[i].notas[j]);
		}
		printf("\n\t%s%.2f", "Promedio: ", estudiantes[i].prom);
		if(i==num-1 && !flag){
			i--;
			flag = 1;
		}
	}
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
