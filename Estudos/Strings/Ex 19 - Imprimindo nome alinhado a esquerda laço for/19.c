#include <stdio.h>
#include <string.h>

/*Fazer um programa que tenha a saida em piramde com espaõ entre as strings, conforme o
tamanho da palavra escrita.*/

int main(void)
{
	//Criando vetor
	char nome[20] = {0};
	char head[] = "---- Imprimindo nome em piramide alinhada a esquerda----\n\n";
	
	//Recebendo o nome
		printf("%s", head);
		printf("Informe um nome: \n");
		scanf("%s", nome); printf("\n");
		
			//Calculando o tamanho do nome
			int tam = strlen(nome);
				
				for(int i = 0; i < tam; i++) //Ex: Tomeki, 1. 0 < 6 = V; 2. 1 < 6 = V; 3. 2 < 6 = V; Etc...
				{
					for(int j = 0; j < i; j++)	//1. 0 < 0 = F;  2. 0 < 1 = V ... 2. 1 < 1 = F;
												//3. 0 < 2 = V ... 1 < 2 = V ... 2 < 2 = F; Etc...
					{
						printf("%s ", nome); //Imprimir a string toda
					}
					printf("\n");
				}
				
		return 0;
}
		
			
		
