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

  contorno[0] = ((rand()%200) + (rand() % 200));

  if (contorno[0 < 100])  {
    contorno[0] += rand() % 100; 
  }

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

      if ((i<contorno[j]) && (i%9==0) && (j%17==0) && (i < contorno[0]) && (rand() % 2 == 0) && (rand()%5 == 0)){
        //estrelas
        fprintf(arquivo, "255 255 255\n");
      }else if(i<contorno[j]){
        int parte = dadosArquivo.tamAltura/5;
        //degrade do ceu
        if (i <= parte){ 
          fprintf(arquivo, "23 30 128\n");
        }else if (i <= parte*2 && i > parte) {
          fprintf(arquivo, "27 34 145\n");
        }else if (i <= parte*3 && i > parte*2) {
          fprintf(arquivo, "29 37 154\n");
        }else if(i <= parte*4 && i > parte*3) {
          fprintf(arquivo, "31 40 164\n");
        }else {
          fprintf(arquivo, "34 43 174\n");
        }  
      }else if(i==contorno[j]){
         fprintf(arquivo, "2 4 20\n");
      }else{
           fprintf(arquivo, "2 4 20\n");
     
        }
      }
   
     }
  


  fclose(arquivo);
  
  free(contorno);
  free(nomeArquivo);

  return 0;
}