#include <stdio.h>
#include <string.h> //strlen

//Solicitar dois nomes e escrevê-los, mostrar a posição de cada letra 

int main(void)
{
	//Criando os vetores
	char nome1[20] = {0};
	char nome2[20] = {0};
	char head[] = "---- Imprimindo cada posicao dos vetores com os nomes ----\n\n";
	
		//Recebendo nome
		printf("%s", head);
		printf("Informe um nome: \n");
		scanf("%s", nome1); printf("\n");
		
		printf("Informe outro nome: \n");
		scanf("%s", nome2); printf("\n");
		
			/*Criando variavel pra receber o tamanho das strings, e a variavel que vai passar pelas
			posicoes do segundo vetor*/
			int tam1 = strlen(nome1), tam2 = strlen(nome2), j = 0;
			
				printf("\t-Nome1-\t\t-Nome2-\n\n");
				
					/*Se as duas strings tiverem a mesma qtde de letras iremos se basear em qualquer
					variavel de tamanho, para termos certeza que passamos por todas as posicoes*/
					if (tam1 == tam2)
					{
						for(int i = 0; i < tam1; i++)
						{
							/*Imprimimos linha por linha 1 char de cada vetor, nome1 sendo controlado
							pela variavel i e nome2 pela variavel j*/
							printf("\t   %c\t\t   %c\n", nome1[i], nome2[j]);
							j++;
						}
					}
					/*Se uma das strings for maior que a outra, basearemos o loop no maior valor 
					para termos certeza que iremos passar por todas as posicoes dos dois vetores*/
					else if (tam1 > tam2)
					{
						for(int i = 0; i < tam1; i++)
						{
							/*Imprimimos linha por linha 1 char de cada vetor, nome1 sendo controlado
							pela variavel i e nome2 pela variavel j*/
							printf("\t   %c\t\t   %c\n", nome1[i], nome2[j]);
							j++;	
						}
					}
					/*Se uma das strings for maior que a outra, basearemos o loop no maior valor 
					para termos certeza que iremos passar por todas as posicoes dos dois vetores*/
					else if (tam2 > tam1)
					{
						for(int i = 0; i < tam2; i++)
						{
							/*Imprimimos linha por linha 1 char de cada vetor, nome1 sendo controlado
							pela variavel i e nome2 pela variavel j*/
							printf("\t   %c\t\t   %c\n", nome1[i], nome2[j]);
							j++;	
						}
					}
					
	return 0;			
}
