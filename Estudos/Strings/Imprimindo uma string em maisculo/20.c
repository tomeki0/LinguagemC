#include <stdio.h>
#include <ctype.h> //Funcao toupper
#include <string.h> //Funcao strlen

/*Digitar um nome e solicitar que seja mostrado em maiúsculo na
tela. */

int main(void)
{
	//Criando vetor
	char nome[20] = {0};
	char head[] = "---- Imprimindo um nome em maisculo ----\n\n";
	
		//Recebendo um nome
		printf("%s", head);
		printf("Informe um nome em minusculo: \n");
		scanf("%s", nome); printf("\n\t");
			
			//Calculando tamanho do nome
			int tam = strlen(nome);
			
				//Imprimindo cada posicao do vetor conforme o tamanho da string
				for(int i = 0; i < tam; i++)
				{
					printf("%c", toupper(nome[i]));	//Toda letra vai ser maiscula
				}
				
	printf("\n");
	return 0;
}
			
