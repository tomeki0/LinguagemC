#include <stdio.h>

float IMC(float peso, float altura);

int main(void)
{
	float pesoEmQuilos, alturaEmMetros, imc;
	char header[] = "---- CALCULADORA IMC ----\n\n";
	
		printf("%s", header);
		printf("Informe seu peso: \n");
		scanf("%f", &pesoEmQuilos);
		printf("\n");
		
		printf("Informe sua altura: \n");
		scanf("%f", &alturaEmMetros);
		printf("\n");
		
		imc = IMC(pesoEmQuilos, alturaEmMetros);
		printf("\tIMC = %.2f\n", imc);
		
			if(imc > 0 && imc < 18.5)
			{
				printf("\n\tAbaixo do peso\n");
			}
			else if(imc >= 18.5 && imc <= 24.9)
			{
				printf("\n\tNormal\n");
			}
			else if(imc >= 25 && imc <= 29.9)
			{
				printf("\n\tAcima do peso\n");
			}
			else if(imc > 30)
			{
				printf("\n\tObesidade\n");
			}
			
	return 0;
}

float IMC(float peso, float altura)
{
	float imc = peso/(altura*altura);
	return imc;
}

