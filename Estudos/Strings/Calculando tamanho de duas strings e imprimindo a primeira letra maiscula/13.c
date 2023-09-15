#include <stdio.h> 
#include <string.h> //Usar o strlen
#include <ctype.h> //Usar o toupper

//Informe dois nomes, imprimir o tamanho de cada um e mostrálos.

int main (void)
{
	//Criando vetor 
	char nome[20] = {0}, nome1[20] = {0};
	char head[] = "---- Recebendo dois nomes e calculando seus tamanhos ----\n\n";
	
		//Recebendo o nome
		printf("%s", head);
		printf("Informe um nome: \n");
		gets(nome); //Trocar por fgets
		printf("\n");
		
		//Recebendo outro nome
		printf("Informe um nome: \n");
		gets(nome1); //Trocar por fgets
		printf("\n");
		
			//Calculando o tamanho das strings
			int tam = strlen(nome), tam1 = strlen(nome1);
			
			//Forma mais longa de fazer a primeira letra da string ser maiscula
			
			/*printf("\t%c", toupper(nome[0])); //Imprindo somente primeira posicao do vetor maiscula
			for(int i = 1; i < tam; i++) //Laço para imprimir o resto da string
			{
				printf("%c", nome[i]);
			}
			printf(" possue %d letras.\n", tam); //Restante da saida
			
			printf("\t%c", toupper(nome1[0])); //Imprindo somente primeira posicao do vetor maiscula
			for(int i = 1; i < tam1; i++) //Laço para imprimir o resto da string
			{
				printf("%c", nome1[i]);
			}
			printf(" possue %d letras.\n\n", tam1);*/ //Restante da saida
			
			/*Imprimindo a primeira posicao do vetor como maiscula 
			e o resto a partir da posicao 1 (segunda posicao)*/
			printf("\t%c%s possue %d letras.\n", toupper(nome[0]), (nome + 1), tam);
			printf("\t%c%s possue %d letras.\n", toupper(nome1[0]), (nome1 + 1), tam1);
			
		return 0;
}
