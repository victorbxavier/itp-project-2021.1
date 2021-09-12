#include "func.h"

int main(int argc, char *argv[]) {
  
  int tam = 0;

  char *nomeArquivo;
  
  int *contorno;

  verificaParametros(argc, argv, &tam, nomeArquivo);

  // for(size_t cont=1; cont < argc; cont++)
  //   printf("%d Parametro: %s\n", cont,argv[cont]);

  contorno= malloc(tam * sizeof(int));

  srand(time(NULL));

  contorno[0] = rand() % 1000;
  contorno[tam-1] = rand() % 1000;

  valor_medio(contorno, 0, tam-1);
  
  // for (int i = 0; i < tam; i++)
  // {
  //   /* code */
  //   printf(" %d ", contorno[i]);
  // }
  
  // codigo teste
  //fprinf(arquivo, "P3\n 1000 \n1000 \n 255 \n");
  //for(int i=0; i<tamanhoImgHor; i++){
  //   for(int j=0; j< tamanhoImgVer; j++){
  //     if(linha>contorno[j]){
  //        fprintf(arquivo, "119 130 186\n");
  //      }
          // else{
          //   fprintf(arquivo, "159 178 255\n");
          // }
  //    }
  //}

  free(contorno);
  free(nomeArquivo);

  return 0;
}