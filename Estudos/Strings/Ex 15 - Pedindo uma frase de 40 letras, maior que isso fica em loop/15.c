#include <stdio.h>
#include <string.h>

/*Solicitar no teclado uma frase com no máximo 40 letras. Se o
tamanho for maior que 40, dar uma mensagem de entrada inválida e
solictar novamente, se passar, imprimir a frase na vertical com um
tempo em cada letra.*/

int main(void)
{
	//Criando um vetor
	char frase[40];
	char head[] = "---- Insira uma frase, no maximo de 40 letras para ser aceito ----\n\n";
		
		//Recebendo a string
		printf("Insira uma frase: \n");
		gets(frase); //Nesse caso usamos o gets por precisar verificar se o tamanho é excedido
		int tam = strlen(frase); printf("\n"); //Calculando o tamanho da string e pulando uma linha
		
			//Iremos a frase tiver tamanho maior que 40, iremos pedir outra menor
			while(tam > 40)
			{
				printf("Tamanho invalido (Max de 40 letras)\nInsira outra frase: \n");
				gets(frase);
				tam = strlen(frase); printf("\n");
			}
			
				//Laço de repetição para imprimirmos toda a frase, char por char em posição vertical
				for(int j = 0; j <= tam; j++)
				{
					printf("%c\n", frase[j]);
				}
				
		return 0;					
}
