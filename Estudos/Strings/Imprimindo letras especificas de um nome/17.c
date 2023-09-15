#include <stdio.h>
#include <ctype.h> //toupper

/*Receber um nome no teclado e imprimir a seguinte saída - Nome
todo: - Primeiro caracter: - Do primeiro até o terceiro caracter:*/

int main(void)
{
	//Criando vetor
	char nome[20] = {0};
	char head[] = "---- Imprimir nome todo, primeira letra e as tres primeiras letras ----\n\n";
	
		//Recebendo nome
		printf("%s", head);
		printf("Informe um nome: \n");
		scanf("%s", nome);
			
			//Imprimindo todas com a primeira letra maiscula
			printf("\n\tNome: %c%s\n", toupper(nome[0]), nome + 1); //Primeira letras maiscula e resto
			printf("\tPrimeira letra: %c\n", toupper(nome[0]));
			printf("\tTres primeiras letras: %c", toupper(nome[0])); 
			
				//Laço para imprimirmos da posicao 1 ate a 2 do vetor 
				for(int i = 1; i < 3; i++)
				{
					printf("%c", nome[i]);
				}	
	
	printf("\n");
	return 0;
}
