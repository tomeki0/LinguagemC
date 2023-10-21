#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool resposta = false;
char vOUf;

bool numIgual (int x, int y);
char verdadeiroOuFalso (int resposta);

int main(void)
{
	int num1, num2;
	
		do
		{
			printf("\nInforme um numero: \n");
			scanf("%d", &num1);
			printf("\n");
			
			if (num1 == 0)
			{
				break;
			}
			
			printf("Informe um numero: \n");
			scanf("%d", &num2);
			printf("\n");
		
			resposta = numIgual(num1, num2);
			printf("%d\n", resposta);
			
			vOUf = verdadeiroOuFalso(resposta);
			printf("%c\n", vOUf);
			
			printf("%d eh igual a %d? %c\n\n", num1, num2, vOUf);
			system("pause");
		
		}
		while (num1 > 0);
	
	return 0;
}

bool numIgual (int x, int y)
{
	if (x == y)
	{
		resposta = true;
	}
	else 
	{
		resposta = false;
	}
	
	return resposta;
}

char verdadeiroOuFalso (int resposta)
{
	if (resposta == 0)
	{
		vOUf = 'n';
	}
	else 
	{
		vOUf = 's';
	}
	
	return vOUf;
}
	
