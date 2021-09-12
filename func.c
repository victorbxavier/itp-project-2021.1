#include "func.h"

int valor_medio(int *array, int pos1, int pos2)  {

	int diferenca=0, posMedia=0;
	
	if((pos2-pos1==1) || (pos1==pos2)){

		return 0;

	}else{
		
		posMedia= (pos1+pos2)/2;

		diferenca = rand() % 500 - 100;

		array[posMedia] = (array[pos1] + array[pos2])/2 + diferenca;

		valor_medio(array, pos1, posMedia);
		
		valor_medio(array, posMedia, pos2);

	}

}

void verificaParametros(int argc, char *argv[], int *tam, char *nomeArquivo){
	
	int existeD=0, existeO=0;

	for (size_t i = 1; i < argc; i++){

		if (strcmp(argv[i], "-d")==0){
			
			*tam=atoi(argv[i+1]);

			existeD++;

		}

		if (strcmp(argv[i], "-o")==0){
			nomeArquivo=malloc(strlen(argv[i+1])*sizeof(char));

			strcpy(nomeArquivo, argv[i+1]);
			nomeArquivo[strlen(argv[i+1])+1]='\0';
			existeO++;
			
		}
	}

	if (existeD==0){
		*tam=17;
	}

	if (existeO==0){

		nomeArquivo=malloc(15*sizeof(char));
		strcpy(nomeArquivo, "montanhas.ppm");
		nomeArquivo[15]='\0';

	}
	
}
