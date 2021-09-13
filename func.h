#ifndef _FUNC_H
#define _FUNC_H
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
typedef struct{
    char identificador[2];
    int tamColuna;
    int tamAltura;
    int maxValorPixel;
}PPM;


int valor_medio (int *array, int pos1, int pos2);
void verificaParametros(int argc, char *argv[], int *tam, char **nomeArquivo);
//Criar uma função para as diferenças ficarem sutis
int diferencaArrays(int *array, int tam);

#endif