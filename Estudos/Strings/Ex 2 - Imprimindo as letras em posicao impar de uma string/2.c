#include <stdio.h>

int main(void)
{
	//Criando um vetor com 20 posi��es
	char nome[20] = {0};
	char head[] = "---- Recebendo um Nome e Imprimindo as Letras na Posicoes Impares ----\n\n";
	
	//Recebendo um nome 
		printf("%s", head);
		printf("Informe um nome: \n");
		scanf("%s", nome);
		printf("\n\t");
		
		//La�o de repeti��o para imprimir a posi��o x do vetor
			for(int i = 0; i < 20; i+= 2)
			{
				printf("%c", nome[i]);
			}
			
		return 0;
}
