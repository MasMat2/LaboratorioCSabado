#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 100

int main(int argc, char *argv[])
{
    FILE *of, *ef;
    char orig[] = "origen.txt";
    char salida[] = "archivo_alreves.txt";
    char corig[STR_SIZE];
    char reves[STR_SIZE];

    //Abrir archivos
    int i;
    of = fopen(orig, "r+");
    ef = fopen(salida, "w");
    //Leer cadena del achivo original
    fgets(corig, STR_SIZE, of);
    //Invertir cadena y guardar resultado
    for (i = 0; i < strlen(corig); i++)
    {
        reves[i] = corig[strlen(corig) - 1 - i];
    }

    //Modificar archivo original con la cadena procesado
    fclose(of);
    of = fopen(orig, "w");
    fprintf(of, "procesado", NULL);
    fprintf(ef, "%s", reves);

    //**************Actividad 2***********
    FILE *nf, *sf;
    int a, b;
    char num[] = "nums.txt";
    char sum[] = "resultado.txt";
    //Abrir archivo para leer numeros
    nf = fopen(num, "r");
    //Abir archivo para guardar suma
    sf = fopen(sum, "w");
    //Leer datos a y b del archivo
    fscanf(nf, "%d %d", &a, &b);
    //Escribir suma en el archivo resultado.txt
    fprintf(sf, "La suma de %d y %d es %d", a, b, a + b);
    system("pause");
    return 0;
}
