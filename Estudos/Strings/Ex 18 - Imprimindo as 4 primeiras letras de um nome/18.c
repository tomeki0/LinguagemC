#include <stdio.h>
#include <ctype.h> // toupper

//Receber um nome e imprimir as 4 primeiras letras do nome.

int main(void)
{
	//Declarando o vetor
	char nome[20] = {0};
	char head[] = "---- Imprimindo as 4 primeiras letras do nome ----\n\n";
		
		//Recebendo o nome 
		printf("%s", head);
		printf("Informe um nome: \n");
		scanf("%s", nome); printf("\n\t");
		printf("%c", toupper(nome[0])); //Imprimindo a primeira letra maiscula
			
			//Imprimindo as outras primeiras letras 
			for(int i = 1; i < 4; i++)
			{
				printf("%c", nome[i]);
			}
			
	return 0;
}
