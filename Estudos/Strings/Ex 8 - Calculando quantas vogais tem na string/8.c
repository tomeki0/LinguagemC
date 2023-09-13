#include <stdio.h>

/*Receber do teclado uma mensagem e imprimir quantas letras A, E,
I, O, U tem esta mensagem. Considerar minúscula e maiúscula.*/

int main(void)
{	
	//Criando vetores e variaveis
	char head[] = "---- Recebendo um nome e imprimindo quantas vogais tem ----\n\n";
	char nome[20] = {0};
	int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;
		
	//Recebendo um nome
		printf("%s", head);
		printf("Informe um nome: \n");
		gets(nome); //Trocar por fgets
		
		//Laço para passarmos por todas as posições do vetor
			for(int i = 0; i < 20; i++)
			{
				//Condição para verificar se o char atual é uma vogal
				if(nome[i] == 'a' || nome[i] == 'A')
				{
					contA++;
				}
				if(nome[i] == 'e' || nome[i] == 'E')
				{
					contE++;
				}
				if(nome[i] == 'i' || nome[i] == 'I')
				{
					contI++;
				}
				if(nome[i] == 'o' || nome[i] == 'O')
				{
					contO++;
				}
				if(nome[i] == 'u' || nome[i] == 'U')
				{
					contU++;
				}
			}
		
		//Imprimindo o total de vogais	
		printf("\nTem %d vogais A\n", contA);
		printf("Tem %d vogais E\n", contE);
		printf("Tem %d vogais I\n", contI);
		printf("Tem %d vogais O\n", contO);
		printf("Tem %d vogais U\n", contU);
		return 0;
}
	
