#include <stdio.h>

int main(void)
{
	//Criando um vetor com 20 posições e um cabeçalho
	char nome[20];
	char head[] = "---- Recebendo um Nome e Imprimindo Somente as 4 Primeiras Letras ----\n\n";

	//Imprimindo o cabeçalho e Recebendo um nome
		printf("%s", head);
		printf("Informe um nome: \n");
		scanf("%s", nome);
		printf("\n\t");
		
		//Laço de repetição para imrpimir x posições do vetor
			for(int i = 0; i < 4; i++)
			{
				printf("%c", nome[i]);
			}
			
		return 0;
}
		
