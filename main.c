#include <stdio.h>
#include <stdlib.h>

/*
*Autor: Adrian Maximiliano Munoz Martinez
*Fecha: 12/09/2019
*Grupo: 008
*Horario: 9-11am sabados
*Matricula: 1679573
*/

int main(int argc, char *argv[]) {
//**************ACTIVIDAD1*****************
float cal;
printf("\n**************\n");
printf("Para calcular si la calificacion es aprobatoria o no ingresar la calificacion");
printf("\nCalificacion: ");
scanf("%f", &cal);

//Rutina de seleccion para imprimir si la entrada
//es una calificacion aprobatoria, no aprobatoria o invalida
if (cal>=5 && cal<=10){
	printf("\nAPTO");
}
else{
	if (cal>=0 && cal<5){
		printf("\nNO APTO");
	}
	else{
		printf("\nERROR: Nota incorrecta");
	}
}
printf("\n**************\n");
//**************ACTIVIDAD2*****************
int dia;
printf("Para calcular el nombre de un dia de la semana ingrese el dia de la semana: ");
printf("\nDia de la semana: ");
scanf("%d", &dia);

//Switch que imprimie el dia de la semana o error si la entrada no es valida
switch(dia){
	case 1:
		printf("\nDomingo dia %d", dia);
		break;
	case 2:
		printf("\nLunes dia %d", dia);
		break;
	case 3:
		printf("\nMartes dia %d", dia);
		break;
	case 4:
		printf("\nMiercoles dia %d", dia);
		break;
	case 5:
		printf("\nJueves dia %d", dia);
		break;
	case 6:
		printf("\nViernes dia %d", dia);
		break;
	case 7:
		printf("\nSabado dia %d", dia);
		break;
	default:
		printf("\nERROR: Dia incorrecto");

}
printf("\n**************\n");
//**************ACTIVIDAD Extra*****************
int op;
printf("Eliga alguna de la siguientes opciones escribiendo el numero de la opcion que eligio");
printf("\n\t1");
printf("\n\t2");
printf("\n\t3");
printf("\n\t4");
printf("\n\nIntroduzca la opcion que desea [1-4]: ");
scanf("%d", &op);


//Switch que imprimie la entrada elegida u opcion invalida si la opcion no es valida
switch(op){
	case 1:
		printf("\nUsted escogio la opcion 1");
		break;
	case 2:
		printf("\nUsted escogio la opcion 2");
		break;
	case 3:
		printf("\nUsted escogio la opcion 3");
		break;
	case 4:
		printf("\nUsted escogio la opcion 4");
		break;
	default:
		printf("\nOpcion no definida");
}
printf("\n**************\n");



	return 0;
}
