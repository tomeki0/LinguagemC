#include <stdio.h>
#include <stdlib.h>

int gerarNumAleatorio(int i);

int main(void)
{
	int i;
	
	i = gerarNumAleatorio(i);
	
	printf("%d\n", i);
	system("pause");
	return 0;
}

int gerarNumAleatorio(int i)
{
	return rand() % 6;
}
