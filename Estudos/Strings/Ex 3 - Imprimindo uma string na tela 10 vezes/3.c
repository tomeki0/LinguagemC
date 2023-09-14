#include <stdio.h>

int main(void)
{
	char nome[20] = {0}; //Para evitar lixc de memoria no vetor, inicializamos dessa forma
	char head[] = "---- Recebendo um nome e imprimindo na tela 10 vezes ----\n\n";
	int con = 0; //Contador para imprimirmos x vezes a sequencia de caracteres
	
	//Recebendo um nome 
		printf("%s", head);
		printf("Informe seu nome: \n");
		scanf("%s", nome);
		printf("\n");
		
	//Iremos imprimir o nome enquanto o contador for menor que 10 e ir acrescentando i++
		while(con < 10)
		{
			for(int i = 0; i < 20; i++) //Imprimimos o nome
			{
				printf("%c", nome[i]);
				
			}
				
			printf("\n"); //Pulamos uma linha e adiciomas 1 ao contador
			con++;        //Ira repetir ate a condicao ser falsa
		}
		
	return 0;
}
					
