#include <stdio.h>
#include <string.h>

/*Criar um algoritmo que entre com uma palavra e imprima
conforme exemplo a seguir - Piramide alinhado a esquerda*/

int main(void)
{
	//Criando vetor e variaveis
	char nome[20] = {0};
	char head[] = "---- Imprimindo nome em piramide alinhada a esquerda ---- \n\n";
	int tam, i, j = 0;
	
		//Recebendo nome
		printf("%s", head);
		printf("Informe um nome: \n");
		scanf("%s", nome);
		printf("\n");
	
			//Calculando tamanho da string com a funcao strlen <string.h>
			tam = strlen(nome); 

				//Laço de repetição para passarmos por todos os char no vetor
				for(int i = 0; i < tam; i++)
				{
					for(int j = 0; j <= i; j++) //Laço para imprimir i vezes a string na mesma linha
					{
						printf("%s", nome);
					}
					
					printf("\n");
				}
				
	return 0;
			
}
