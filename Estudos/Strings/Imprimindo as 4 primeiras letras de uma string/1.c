#include <stdio.h>

int main(void)
{
	//Criando um vetor com 20 posi��es e um cabe�alho
	char nome[20];
	char head[] = "---- Recebendo um Nome e Imprimindo Somente as 4 Primeiras Letras ----\n\n";

	//Imprimindo o cabe�alho e Recebendo um nome
		printf("%s", head);
		printf("Informe um nome: \n");
		scanf("%s", nome);
		printf("\n\t");
		
		//La�o de repeti��o para imrpimir x posi��es do vetor
			for(int i = 0; i < 4; i++)
			{
				printf("%c", nome[i]);
			}
			
		return 0;
}
		
