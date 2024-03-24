#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	char operacao, resposta;
	float num1, num2;
	
	setlocale(LC_ALL, "Portuguese");
	
	do
	{
		printf("\t - Calculadora B�sica - \n\n");
		printf("Opera��es: +, -, *, /\n\n");
		
		printf("Informe o primeiro numero: ");
		scanf("%f", &num1);
		fflush(stdin);
		printf("\n");
		
		printf("Informe a operacao desejada: ");
		scanf("%c", &operacao);
		fflush(stdin);
		printf("\n");
		
		printf("Informe o segundo numero: ");
		scanf("%f", &num2);
		fflush(stdin);
		printf("\n");
		
		switch (operacao)
		{
			case '+':
				printf("Adi��o selecionada...\n");
				printf("%.2f + %.2f = %.2f\n\n", num1, num2, (num1 + num2));
				break;
			
			case '-':
				printf("Subtra��o selecionada...\n");
				printf("%.2f - %.2f = %.2f\n\n", num1, num2, (num1 - num2));
				break;
			
			case '*':
				printf("Multiplica��o selecionada...\n");
				printf("%.2f * %.2f = %.2f\n\n", num1, num2, (num1 * num2));
				break;
				
			case '/':
				printf("Divis�o selecionada...\n");
				printf("%.2f / %.2f = %.2f\n\n", num1, num2, (float)(num1 / num2));
				break;
				
			default:
				printf("Opera��o inv�lida...\n");
		}
		
		printf("Repetir? (S/N): ");
		scanf("%c", &resposta);
		
		if (resposta == 'n' || resposta == 'N')
			printf("Saindo...\n\n");
		else
		{
			system("pause");
			system("cls");
		}
	}
	while(resposta == 's' || resposta == 'S');
	
	system("pause");
	return 0;
}
