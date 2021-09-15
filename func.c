#include "func.h"

int valor_medio(int *array, int pos1, int pos2)  {

	int diferenca=0, posMedia=0;
	
	if((pos2-pos1==1) || (pos1==pos2)){

		return 0;

	}else{
		
		posMedia= (pos1+pos2)/2;

		diferenca = rand() % 100 - 50;

		array[posMedia] = (array[pos1] + array[pos2])/2 + diferenca;

		valor_medio(array, pos1, posMedia);
		
		valor_medio(array, posMedia, pos2);

	}

}

void verificaParametros(int argc, char *argv[], int *tam, char **nomeArquivo){
	
	int existeD=0, existeO=0;

	for (size_t i = 1; i < argc; i++){

		if (strcmp(argv[i], "-d")==0){
			
			*tam=atoi(argv[i+1]);

			existeD++;

		}

		if (strcmp(argv[i], "-o")==0){
			*nomeArquivo=malloc(strlen(argv[i+1])*sizeof(char*));

			strcpy(*nomeArquivo, argv[i+1]);
			(*nomeArquivo)[strlen(argv[i+1])]='\0';
			existeO++;
			
		}
	}

	if (existeD==0){
		*tam=2000;
	}

	if (existeO==0){

		*nomeArquivo=malloc(15*sizeof(char*));
		strcpy(*nomeArquivo, "montanhas.ppm");
		(*nomeArquivo)[14]='\0';

	}
	
}

int diferencaArrays(int *array, int tam){
	for (size_t a = 0; a < tam-1; a++){
		if (array[a]-array[a+1]>5){

			array[a]= (array[a]+array[a+1]/2)+3;

		}else if(array[a]-array[a+1]<-5){

			array[a+1]= (array[a]+array[a+1]/2)+3;
		}
		
	}
	for (size_t b = tam-1; b < 0; b--){
		if (array[b-1]-array[b]>5){

			array[b-1]= (array[b]+array[b+1]/2)+3;

		}else if(array[b-1]-array[b]<-5){

			array[b]= (array[b]+array[b+1]/2)+3;
		}
		
	}
	
}
