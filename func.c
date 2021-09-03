#include "func.h"

int valor_medio(int *array, int tamA, int pos1, int pos2)  {

	int diferenca=0, posMedia=0;
	
	if((pos2-pos1==1) || (pos1==pos2)){

		return 0;

	}else{
		
		posMedia= (pos1+pos2)/2;

		diferenca = rand() % 500 - 100;

		array[posMedia] = (array[pos1] + array[pos2])/2 + diferenca;

		valor_medio(array, tamA, pos1, posMedia);
		
		valor_medio(array, tamA, posMedia, pos2);

	}

}
