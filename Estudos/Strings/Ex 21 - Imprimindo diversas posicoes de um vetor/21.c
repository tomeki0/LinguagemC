#include <stdio.h>
#include <ctype.h> //Toupper
#include <string.h> //Strlen

/* Solicitar um nome e mostrar o primeiro, o último, o quarto, do
primeiro ao terceiro, do primeiro ao ultimo. Mostrar a posição de cada
letra no vetor. */

int main(void)
{
	//Criando vetor
	char nome[20] = {0};
	char head[] = "---- Imprimindo diversas posicoes do vetor ----\n\n";
		
		//Recebendo nome
		printf("%s", head);
		printf("Informe um nome: \n");
		scanf("%s", nome); printf("\n\t");
		
			//Calculcando tamanho do nome
			int tam = strlen(nome);
			
				//Imprimindo as posicoes do vetor 
				//Imprimindo a primeira
				printf("Primeira letra: %c\n", toupper(nome[0])); 
				
				/*Imprimindo a ultima com (tamanho total - 1), pois a ultima posicao é o /0
				a ultima letra esta na antepenultima posicao */
				printf("\tUltima letra: %c\n", toupper (nome[(tam - 1)])); 
				
				//Quarta letra esta na posicao 3 - 0, 1, 2 ,3....
				printf("\tQuarta letra: %c\n", toupper (nome[3]));
				
				//Imprimindo a primeira letra das tres primeiras como maiscula, e o resto no loop
				printf("\tTres primeiras letras: %c", toupper(nome[0]));
				
					for(int i = 1; i < 3; i++)
					{
						printf("%c", nome[i]);
					}
				
				//Imprimindo a primeira letra maiscula e o resto da string	
				printf("\n\tNome: %c%s\n", toupper(nome[0]), nome + 1);
				
		return 0;
}
