O que foi feito

Primeiramente foi feita a criação da função valor_medio, do projeto .c, e o uso da função rand para a primeira,
a última posição do array contorno e adição do elemento adicional na imagem das estrelas.
Feito por Ana Catarina.

Posteriormente foi feita as alterações nos parâmetros da função, criação do .h e .c, 
modificação do array contorno para um array dinâmico, criação da função verificaParametros, inclusão da 
biblioteca string.h, adição dos parâmetros argc e argv na função main, criação da variável nomeArquivo, 
criação do typedef struct PPM, criação da variável dadosArquivo, FILE arquivo e criação da imagem. 
Feito por Victor Xavier.

O que não foi feito

O que seria feito diferente

Poderia ter sido usado consts e externs com relação ao typedef struct PPM, mas que não foi usado por não saber
tão bem esses conceitos.

Como compilar o projeto

Na linha de comando, para criar o arquivo escreva na mesma gcc func.h func.c projeto.c -o projeto.exe para
criar o executável, para executar o programa escreva .\projeto.exe, assim ele criará a imagem, porém com um
nome e o deslocamento aleatório com valores padrões, para escolher o deslocamento aleatório, basta adicionar
-d após o nome do executável e em seguida com o número desejado, para o nome do arquivo adicione o -o e em
seguida o nome do arquivo. Você pode colocar em qualquer ordem os paramêtros e omitir um ou outro sem que haja
algum problema para a geração da imagem.
