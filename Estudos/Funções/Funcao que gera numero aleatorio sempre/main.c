#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumAleatorio(void);

int main(void)
{
	int num;
	
	srand(time(NULL));
	
	for (int i = 1; i <= 5; i++)
	{
		num = gerarNumAleatorio();
		printf("%d\n", num);
	}
	
	system("pause");
	return 0;
}

int gerarNumAleatorio(void)
{	
	return 1 + rand() % 10;
}
	
	

