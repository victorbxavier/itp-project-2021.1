#include "func.h"

int main() {
  
  int tam = 17;
  int *contorno;
  contorno= malloc(tam * sizeof(int));

  srand(time(NULL));

  contorno[0] = rand() % 1000;
  contorno[tam-1] = rand() % 1000;

  valor_medio(contorno, tam, 0, tam-1);
  
  for (int i = 0; i < tam; i++)
  {
    /* code */
    printf(" %d ", contorno[i]);
  }
  

  free(contorno);

  return 0;
}