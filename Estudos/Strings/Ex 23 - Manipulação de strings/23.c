#include <stdio.h>
#include <string.h> //Funcao strlen

/* Solicitar um nome e mostrar o primeiro, o último, o quarto, do
primeiro ao terceiro do primeiro ao ultimo caracter digitado e suas
posições. Mostrar quantas letras tem o nome e escrevê-lo de trás prá
frente. Mostrar o número de vogais e constantes. */

int main(void)
{
	//Criando vetores
	char nome[20] = {0};
	char head[] = "---- Manipulacao de strings ----\n";
	char tomeki[] = "\t  por Tomeki\n\n";
	char vogais[10] = "aeiouAEIOU"; //Vetor para comparar se um char é uma vogal
	int contVog, contCon = 0; //Variaveis contadores 
	
		//Recebendo o nome
		printf("%s\n%s", head, tomeki);
		printf("Informe um nome: \n");
		scanf("%s", nome); printf("\n");
			
			//Calculando tamanho da string
			int tam = strlen(nome);
			
				//Imprimindo algumas posicoes do vetor
				printf("\tPrimeira letra: %c\n\n", nome[0]); //Primeira posicso
				printf("\tUltima letra: %c\n\n", nome[tam - 1]); //Penultima posicao = ultima letra
				printf("\tQuarta letra: %c\n\n", nome[3]); //Terceira posicao = 4 letra
				printf("\tTres primeiras letras: "); //Frase fixa, letras irao imprimir no laço
				
					//Passar pelas 3 primerias posicoes do vetor e imprimi-las
					for(int i = 0; i < 3; i++)
					{
						printf("%c", nome[i]);
					}
					printf("\n\n");
					
					//Passar por todas as posicoes do vetor e imprimi-las individualmente
					for(int j = 0; j < tam; j++)
					{
						printf("\tPosicao %d: %c\n", j, nome[j]);
					}
					
				//Imprimindo a qtde de chars da string
				printf("\n");
				printf("\t%s possue %d letras\n\n", nome, tam);
				printf("\t%s ao contrario: ", nome); //String ao contrario fica... entra no laço
				
					//Laço para imprimir da ultima posicao ate a primeira, ou seja, de tras p frente
					for(int k = tam; k >= 0; k--)
					{
						printf("%c", nome[k]);
					}
					
				printf("\n\n");
				
					//Comparando os chars com vogais e calculando quantas vogais tem na string
					//O primeiro laço é para passarmos por todas as posicoes, ou seja, todos os chars
					for(int l = 0; l < tam; l++)
					{
						/*O segundo laço é para compararmos com o vetor vogais, que ira passar por
						todas as posicoes do vetor que contem as vogais, minusculas e maisculas*/
						for(int m = 0; m < 10; m++)
						{
							/* Se o char da posicao autal do vetor NOME for igual ao char da posicao
							atual do vetor VOGAIS, ou seja, se a letra da string for uma vogal,
							iremos acrescentar 1 ao contador de vogais */
							if(nome[l] == vogais[m])
							{
								contVog++;
							}
						}
					}
				
		   	  /*Para contarmos a qtde de consoantes de uma maneira mais facil
				subtrai do total do tamanho da string, a qtde de vogais,
				assim sobrando somente a qtde de consoantes */
				contCon = tam - contVog;
				
			printf("\t%s possue %d VOGAIS e %d CONSOANTES\n", nome, contVog, contCon);
		
		return 0;
}
					
