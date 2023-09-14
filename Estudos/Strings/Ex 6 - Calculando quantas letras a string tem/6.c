#include <stdio.h>

int main(void)
{
	//Criando vetor e variaveis
	char nome[20] = {0};
	char head[] = "---- Recebendo um Nome e Calculando Quantas Letras Tem ----\n\n";
	int cont = 1, i, total = 0;
	
	//Recebendo nome
		printf("%s", head);
		printf("Informe um nome: \n");
		gets(nome); //Trocar por fgets(nome_vetor, tam_vetor, stdin)
		
		//Laço para verificarmos todas as possicoes do vetor
			for(i; i < 20; i++)
			{
				if(nome[i] != '\0') //Se o char na posicao atual for != do char que fecha a string
				{
					cont++;			//Acrescentar 1 a contador de letras totais da string
				}
			}
	
	//Imprimindo quantas letras a string possue
	printf("\n\t%d letras\n", cont);
	return 0;
		
}

		
	
	
