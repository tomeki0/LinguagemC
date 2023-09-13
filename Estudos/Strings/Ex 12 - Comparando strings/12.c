#include <stdio.h>
#include <string.h>

//Recebendo sigla do estado e imprimindo uma frase local

int main(void)
{
	//Criando vetor
	char sigla[3];
	char head[] = "---- Recebendo sigla do estado e imprimindo uma frase local ----\n\n";
	
		//Recebendo a sigla
		printf("Informe a sigla do seu estado: \n");
		gets(sigla); //Trocar por fgets
		printf("\n");

			/*Funcao stricmp - compara o valor de strings e retorna um valor inteiro
			0 é se elas sao identicas*/
			if (stricmp (sigla, "am") == 0) //Comparando strings
			{
				printf("\tTu gosta de peixe?\n\tTu eh doidooo\n");
			}
			else if(stricmp (sigla, "sp") == 0) //Comparando strings
			{
				printf("\tSalve, salve cachorro\n\tOnde eh tua quebrada?\n");
			}
			else if(stricmp (sigla, "rj") == 0) //Comparando strings
			{
				printf("\tCoe, menor\n\tTa de cao com os criax da favela?\n");
			}
			else if(stricmp (sigla, "mg") == 0) //Comparando strings
			{
				printf("\tBao dia, so\n\tE o pao de queijo?\n");
			}
		
	return 0;
}
