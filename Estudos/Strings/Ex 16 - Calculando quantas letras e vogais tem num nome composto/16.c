#include <stdio.h>
#include <string.h> //Usar o strlen
#include <ctype.h> //Usar o toupper e isspace

/*Escrever um programa que receba um nome -Que conte o número
de vogais existentes nele. -O programa deverá imprimir o numero
total de caracteres do nome -Quantas vogais - E a respectiva
porcentagem das vogais em relação ao total de caracteres*/

int main(void)
{
	//Criando vetor
	char nome[30] = {0};
	char head[] = "---- Calculando e imprimindo quantas vogais tem no nome ----\n\n";
	
		//Recebendo nome
		printf("%s", head);
		printf("Insira nome e sobrenome: \n");
		gets(nome); printf("\n");
		//fgets(nome, 30, stdin);
		
		//Calculando tamanho da string
		int tam = strlen(nome), vogais = 0;
		//printf("%d", tam);
			
			//Laço para passar por todos os char do vetor e comparar se sao vogais
			for(int i = 0; i <= tam; i++)
			{
				if (nome[i] == 'a' || nome[i] == 'A' || nome[i] == 'e' || nome[i] == 'E' || 
				nome[i] == 'i' || nome[i] == 'I' || nome[i] == 'o' || nome[i] == 'O' || 
				nome[i] == 'u' || nome[i] == 'U') //Comparando o caracter eh uma vogal
				{
					vogais++; //Se for acrescentar 1 ao contador de vogais
				}
				//Comparando o char atual com um espaço, se for vai retornar um num != 0, se nao = 0
				if (isspace(nome[i]) != 0) 
				{
					tam--; /*Se retornar um num diferente de 0, ou seja, for um espaço, 
							nao contamos como uma letra no tamanho total da string*/
				}
			}
		
		float porcent = ((float)vogais/tam) * 100; //Calculando a porcetagem de vogais na string
		printf("\t%c%s possue %d letras\n", toupper(nome[0]), nome + 1, tam);
		printf("\tE possue %d vogais\n", vogais);
		printf("\t%.2f%% das letras do nome sao vogais\n", porcent );
		
	return 0;
}
					
		
