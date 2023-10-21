#include <stdio.h>
#include <stdlib.h>

void verificarSinal (int x);

int main(void)
{
	int num, resultado;
	
	printf("Informe um numero: \n");
	scanf("%d", &num);
	
	verificarSinal(num);
	
	system("pause");
	return 0;
}

void verificarSinal (int x)
{
	if (x > 0)
	{
		printf("\n\t%d eh postivo\n\n", x);
	}
	else if (x < 0)
	{
		printf("\n\t%d eh negativo\n\n", x);
	}
}
