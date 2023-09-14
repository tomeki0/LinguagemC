#include <stdio.h>
#include <ctype.h>

/*Entrar com um nome e imprimir o nome somente se a primeira
letra do nome for “a” (maiúscula ou minúscula) */

int main(void)
{
	//Criando vetor
	char nome[20] = {0};
	char head[] = "---- Recebendo um nome e imprimindo somente se a primeira letra for A ----\n\n";
	
		//Recebendo um nome
		printf("%s", head);
		printf("Informe um nome: \n");
		gets(nome); //Trocar por fgets 
		printf("\n");
	
			//Comparando a primeira posicao do vetor com a letra A
			if(nome[0] == 'a' || nome[0] == 'A') //Se for verdade, ira imprimir o nome
			{
				/*Imprimindo a primeira posicao do vetor como maiscula 
				e o resto a partir da posicao 1 (segunda posicao)*/
				printf("\t%c%s\n", toupper(nome[0]), nome + 1); 
			}
	
		return 0;		
}
