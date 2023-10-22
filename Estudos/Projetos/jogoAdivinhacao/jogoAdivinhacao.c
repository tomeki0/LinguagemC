#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define head "------------------- ADIVINHE O NUMERO -------------------"
#define options "\nPara sair digite 0\n\n"
#define tomeki "\t\t\tby Tomeki\t\t\t"

int randomNum (void); //Funcao pra gerar um numero aleatorio
void printHeader(void); //Funcao pra imprimir cabecalho


int main(void)
{       
    int chuteAtual = 0;
    int random;

    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //Iniciando semente da randomização
	random = randomNum(); //Gerando numero aleatorio de 1 a 1000       
    printHeader(); //Imprimindo o cabecalho  
    
	do
	{ 
	    //printf("%d\n", random);
	    printf("Gerando um número...\n\n");
	    printf("Chute um número de 1 a 1000: ");
	    scanf("%d", &chuteAtual);
		
	    if (chuteAtual == 0) //Se chuter for 0, fecha o programa
	    {
	        break;
	    }
	    else if (chuteAtual < 0) //Se for negativo diz numero invalido
	    {
	    	printf("\n\tNumero invalido!\n\n");
	    	system("pause");
	    	system("cls");
	    }
	    else if (chuteAtual == random) //Se chuter for certo de primeira
	    {
	        printf("\n\tParabéns, você conseguiu de primeira!\n\n");
	        system("pause");
	        system("cls");
	    }
		else 
		{
		    do
			{
				if (chuteAtual == 0)
	    		{
	    			printf("\n\tSaindo...\n\n");
	    			break;
	    		}
	    		else if (chuteAtual < 0)
	    		{
	    			printf("\n\tNumero invalido!\n\n");
	    			printf("Chute um número positivo: ");
			        scanf("%d", &chuteAtual);
			        fflush(stdin);
	    		}
			    else if (chuteAtual > random)
			    {
			        printf("\n\t%d é maior que o número aleatório.\n\n", chuteAtual);
			        printf("Chute um número menor que %d: ", chuteAtual);
			        scanf("%d", &chuteAtual);
			        fflush(stdin);
			    }
			    else if (chuteAtual > 0 && chuteAtual < random)
			    {
			        printf("\n\t%d é menor que o número aleatório.\n\n", chuteAtual);
			        printf("Chute um número maior que %d: ", chuteAtual);
			        scanf("%d", &chuteAtual);
			        fflush(stdin);
			    }
			    if (chuteAtual == random)
			    {   
			        printf("\n\tVocê acertou!\n\n");
			        system("pause");
			        system("cls");
			    }
			    
	        }    
	        while (chuteAtual != random); //Pedir pro usuario chutar enquanto nao acertar
	    }								  //Enquando o chute for diferente do numero
	    
	    if (chuteAtual != 0) //Condicao pra continuar o jogo e imprimir o cabecalho
	    {
			random = randomNum();
			printHeader();
		}
    }	
    while(chuteAtual != 0 || chuteAtual < 0);
    system("pause");
    return 0;

}

int randomNum (void)
{
	return 1 + rand() % 1000;
}

void printHeader(void)
{
	printf("%s\n", head);
    printf("%s", tomeki);
    printf("%s", options);
}
