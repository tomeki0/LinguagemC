#include <stdio.h>
#include <stdlib.h>

int somaNum (int x, int y);

int soma = 0;

int main(void)
{
	int num1, num2;
	
	printf("Informe um numero: \n");
	scanf("%d", &num1);
	
	printf("Informe outro numero: \n");
	scanf("%d", &num2);
	
	soma = somaNum(num1, num2);
	
	printf("%d + %d = %d\n\n", num1, num2, soma);
	system("pause");
	return 0;
}

int somaNum (int x, int y)
{
	soma = x + y;
	//printf("%d\n", soma);
	return x + y;
}
