#include <stdio.h>

int main(void)
{
	//Criando vetores e inicializando para nao tem lixo de memoria
	char nome[40] = {0}, endereco[40] = {0}, telefone[11];
	char head[] = "---- Recebendo um nome, endereco, telefone e imprimindo ----\n\n";
	
	//Recebendo nome
		printf("%s", head);
		printf("Informe um nome: \n");
		gets(nome); //Substituir gets por fgets no futuro
		printf("\n");
	
	//Recebendo endereço
		printf("Informe um endereco: \n");
		gets(endereco); //Substituir gets por fgets no futuro
		printf("\n");
	
	//Recebendo n de telefone
		printf("Informe um n de telefone: \n");
		gets(telefone); //Substituir gets por fgets no futuro
		printf("\n");
		
		//Imprimindo as strings
			printf("Seu nome: %s\n", nome);
			printf("Seu endereco: %s\n", endereco);
			printf("Seu telefone: %s", telefone);
		
		return 0;
}
	
	
	


