#include "func.h"

int main(int argc, char *argv[]) {
  
  int tam = 0;

  char *nomeArquivo;
  
  int *contorno;

  PPM dadosArquivo;

  verificaParametros(argc, argv, &tam, &nomeArquivo);

  FILE *arquivo=fopen(nomeArquivo, "wb");

  contorno = malloc(tam * sizeof(int));

  srand(time(NULL));

  contorno[0] = rand() % 520;
  contorno[tam-1] = contorno[0] + (rand() % 100 - 50);

  valor_medio(contorno, 0, tam-1);
  diferencaArrays(contorno, tam);

  strcpy(dadosArquivo.identificador,"P3");
  dadosArquivo.tamColuna=tam;
  dadosArquivo.tamAltura=520;
  dadosArquivo.maxValorPixel=255;

  fprintf(arquivo, "%s\n%d %d\n%d\n", dadosArquivo.identificador, dadosArquivo.tamColuna, dadosArquivo.tamAltura, dadosArquivo.maxValorPixel);
  
  for(int i=0; i<dadosArquivo.tamAltura; i++){
    for(int j=0; j< dadosArquivo.tamColuna; j++){

      if ((i<contorno[j]) && (i%9==0) && (j%17==0)){
        fprintf(arquivo, "255 255 255\n");
      }else if(i<contorno[j]){
         fprintf(arquivo, "25 25 112\n");
      }else if(i==contorno[j]){
         fprintf(arquivo, "0 0 0\n");
      }else{
         fprintf(arquivo, "70 130 180\n");
      }
   
     }
  }

  fclose(arquivo);

  free(contorno);
  free(nomeArquivo);

  return 0;
}