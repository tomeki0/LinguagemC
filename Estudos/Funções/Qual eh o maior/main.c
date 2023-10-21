#include <stdio.h>
#include <stdlib.h>

int qualEhMaior (int x, int y);

int main(void)
{
	int num1, num2;

	do
	{	
		printf("Informe um numero: \n");
		scanf("%d", &num1);
		printf("\n");
		
		printf("Informe outro numero: \n");
		scanf("%d", &num2);
		
		if (num1 == num2)
		{
			printf("\nNumeros iguais, insira numeros diferentes!\n");
			system("pause");
			system("cls");
		}
		
	}
	while (num1 == num2);

	printf("\n\t%d eh maior\n\n", qualEhMaior(num1, num2));
	system("pause");
	return 0;
}

int qualEhMaior (int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else if (y > x)
	{
		return y;
	}

}
	
