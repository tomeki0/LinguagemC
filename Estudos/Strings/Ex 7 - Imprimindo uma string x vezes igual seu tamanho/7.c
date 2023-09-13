#include <stdio.h>

/*Receber um nome e imprimir tantas vezes quantos
forem seus caracteres*/

int main(void)
{
	//Criando vetor e variaveis
	char nome[20] = {0};
	char head[] = "---- Recebendo um nome, calculando quantas letras tem\nE imprimindo o nome nessa qtde ----\n\n";
	int cont = 1, i, total = 0;
	
	//Recebendo nome
		printf("%s", head);
		printf("Informe um nome: \n");
		gets(nome); //Trocar por fgets
		
		//Laço de repetição para passarmos por todas as posições do vetor
			for(i; i < 20; i++)
			{
				if(nome[i] != '\0') //Se o char atual for != que o ultimo char do vetor 
				{                   //Que indica que a string no vetor chegou ao fim
				
					cont++;	//Acrescentar 1 ao contador de tamanho da string
				}
			}
			printf("\n");
			
			//Enquanto i for menor que o tamanho da string iremos entrar no...
			for(i = 0; i < cont; i++) //...laço para imprimir i vezes a string 
			{
				for(int j = 0; j < 20; j++) //Laço para imprimir a cadeia de char
				{
					printf("%c", nome[j]); 
				}
				printf("\n");
			}
		
		return 0;
}
	
