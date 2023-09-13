#include <stdio.h>

//Receber um nome no teclado e imprimir quantas letras "A" tem o nome

int main(void)
{	
	//Criando vetor e variaveis
	char head[] = "---- Recebendo um nome e imprimindo quantas vogais A tem ----\n\n";
	char nome[20] = {0};
	int contA = 0;
		
	//Recebendo um nome
		printf("%s", head);
		printf("Informe um nome: \n");
		gets(nome); //Trocar por fgets
		
		//Laço de repetição para passarmos por todas as posições o vetor
			for(int i = 0; i < 20; i++)
			{
				if(nome[i] == 'a' || nome[i] == 'A') //Verificando se o char atual é igual a A
				{
					contA++; //Se sim, acrescentamos 1 ao contador de letras A da string
				}
			}
			
		//Imprimindo quantas letras A tem na string
		printf("\n\tTem %d vogais A\n", contA);
		return 0;
}

