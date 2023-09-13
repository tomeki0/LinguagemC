#include <stdio.h>
#include <string.h>

/*Criar um algoritmo que entre com uma palavra e imprima
conforme exemplo a seguir - Piramide alinhado a esquerda*/

int main(void)
{
	//Criando vetor 
	char nome[20] = {0};
	char head[] = "---- Imprimindo nome em piramide alinhada a esquerda ---- \n\n";
	
		//Recebendo nome
		printf("%s", head);
		printf("Informe um nome: \n");
		scanf("%s", nome);
		printf("\n");
		
		//Calculando tamanho da string com a funcao strlen <string.h>
		int tam = strlen(nome);
	
			//Laço para repetirmos e imprimirmos a string, j vezes = seu tamanho, verticalmente
			for(int j = 1; j <= tam; j++)	//Imprime 1 vez
			{
				for(int k = 0; k < j; k++) //Laço para imprimirmos k vezes a string na mesma linha
										   //Vai acrescentando as vezes que sera impresso na linha
				{
					for(int l = 0; l < tam; l++) //Laço para imprimirmos cada char dentro do vetor
					{
						printf("%c", nome[l]);
					}
				}
			
			printf("\n");
		}
	
	return 0;

}
