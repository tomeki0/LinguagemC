#include <stdio.h>
#include <string.h>

/* Receber um nome do teclado e imprimí-lo
de trás pra frente */

int main(void)
{
	//Criando vetor
	char nome[20] = {0};
	char head[] = "---- Recebendo um nome e imprimindo de tras pra frente ----\n\n";
			
		//Recebendo nome
		printf("%s", head);
		printf("Informe um nome: \n");
		gets(nome); //Trocar por fgets
		
		//Calculando o tamanho da string
		int i = 0, tam = strlen(nome);
		printf("\n\t");
		
			/*Enquanto o tamanho for maior que i = 0, iremos decrementar 1 em tam
			assim os char irao passar de tras pra frente no vetor*/
			for(tam; tam >= i; tam--)
			{
				printf("%c", nome[tam]); //Começa imprimindo a ultima posicao do vetor e vai ate a primeira
			}
		
		printf("\n");
		return 0;		
}
