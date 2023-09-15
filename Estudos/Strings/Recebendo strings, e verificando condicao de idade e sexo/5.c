#include <stdio.h>

/* Ler nome, sexo e idade. Se sexo for feminino e idade menor que
25. Imprimir o nome da pessoa e a palavra ACEITA. Caso contrario
imprimir NAO ACEITA.*/

int main(void)
{
	//Criando vetor para receber nome e variaveis
	char nome[25] = {0}, sexo;
	char head[] = "Se sexo for F e idade menor que 25, imprimir nome e ACEITA\nSenao, imprimir NAO ACEITA.\n\n";
	int idade = 0;
	
	//Recebendo nome
		printf("%s", head);
		printf("Informe seu nome: \n");
		gets(nome);
		printf("\n");
	
	//Recebendo o sexo
		printf("Informe seu sexo: \n");
		scanf("%c", &sexo);
		printf("\n");
		
	//Recebendo a idade
		printf("Informe sua idade: \n");
		scanf("%d", &idade);
		printf("\n");
		
		//Condicao para sabermos se o sexo é feminimo
			if(sexo == 'F' || sexo == 'f')
			{
				//Condição para além do sexo ser F, a idade ser menor que 25
				if(idade < 25)
				{
					printf("\t%s\n\tACEITA.\n\n", nome); //Se for verdade imprimir ACEITA
				}
				else
				{
					printf("\tNAO ACEITA.\n\n"); //Se nao for verdade imprimir NAO ACEITA
				}
			}
			else
			{
				printf("\tNAO ACEITA.\n\n"); //Se nao for verdade imprimir NAO ACEITA
			}
		
		return 0;
}
		
	




