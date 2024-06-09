#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

#define QTDE_CARROS 4

#define NOME_LOCADORA "\t - Locadora de Ve�culos HK3G - \n\n"

//Estrutura de endereco
typedef struct 
{
    char rua[40];
    char bairro[20];
    char cidade[20];
    char estado[20];
    
} Endereco;

//Estrutura de cliente
typedef struct 
{
    char nome[50];
    char email[50];
    char telefone[12];
    char cpf[12];
    
    float saldo;
    bool habilitado;
    Endereco endereco;
    
} Cliente;

//Estrutura de carro
typedef struct 
{
    char modelo[30];
    char cor[10];
    char placa[8];
    int ano;
    
} Carro;

//Estrutura de valor do aluguel
typedef struct 
{        
    int qtde_dias;
    float valor_diaria;
    float valor_total;
    
} ValorAluguel;

//Estrutura de estoque
typedef struct 
{
    Carro carro;
    int qtde_carro_atual;
    ValorAluguel valor_aluguel;
    
} Estoque;

//Variaveis globais
Cliente cliente;
Estoque estoque_carros[QTDE_CARROS];
int qtde_alugueis = 0;
int cliente_cadastrado;
int opcao_carro;
int id_aluguel = 0;

//Declara��es das fun��es
void menu_opcoes();
void armazenar_carros_no_vetor();
void imprimir_estoque_carros();
void alugar_carro();
void salvar_informacoes_aluguel();
void salvar_qtde_alugueis();
void carregar_qtde_alugueis();
void carregar_id_aluguel();
void salvar_id_aluguel();
void atualizar_qtde_carro(int id);
void devolver();

//Fun��o principal
int main()
{
	//Aceita acentua��o da lingua portuguesa
    setlocale(LC_ALL, "Portuguese");
    
    /* Importa as informa��es dos arquivos e joga nas variaveis 
	para serem manipuladas durante a execu��o do programa */
    armazenar_carros_no_vetor();
    carregar_qtde_alugueis();
    carregar_id_aluguel();
    
    //opcao do menu
    int opcao_menu;
	
	//imprime menu de opcoes
    menu_opcoes();
    
    //mensagem de debug para saber a qtde de algueis
    printf("\nQuantidade de alugu�is: %d\n", qtde_alugueis);
    
    //funcionamento geral, la�o de repeti��o do programan todo
    do
    {
        //recebe a op��o de menu
        do
        {
        	printf("\nInforme a op��o desejada: ");
        	scanf("%d", &opcao_menu);
        	
        	//se nao estiver dentre as opcoes v�lidas mostra a mensagem
	        if (opcao_menu < 1 || opcao_menu > 4)
	        	printf("Op��o inv�lida. Tente novamente\n");
	    }
	    //fica em loop se nao estiver dentre as opcoes v�lidas
	    while(opcao_menu < 1 || opcao_menu > 4);
        
        //verifica qual foi a opcao informada
        switch(opcao_menu)
        {
            case 1:
            	
            	//Limpa tela
                printf("\n");
                system("pause");
                system("cls");
                
                //Recebe o saldo e o cpf do cliente
                printf("\t - Ficha de cadastro - \n\n");
                printf("Cpf: ");
                getchar(); //Limpa o buffer pra receber o cpf
                fgets(cliente.cpf, 12, stdin);
                
                printf("Saldo: ");
                scanf("%f", &cliente.saldo);
                getchar(); //Limpa o buffer
                
                //Informa que tem cliente cadastrado, se torna verdade
                printf("\nCliente cadastrado.\n");
                cliente_cadastrado = 1; 
                
                //Se houver cliente cadatrado entao prosseguimos com o aluguel
                if (cliente_cadastrado == 1)
                {
                	//limpa a tela
                    printf("\n");
                    system("pause");
                    system("cls");
                    
                    //imprime o estoque de carros
                    printf("\t - Estoque de carros - \n\n");
                    imprimir_estoque_carros();
                    printf("\n");
                    
                    do
                    {
	                    //recebe o id do carro
	                    printf("Id do carro desejado: ");
	                    scanf("%d", &opcao_carro);
	                    
	                    if(opcao_carro < 1 || opcao_carro > QTDE_CARROS)
	                    	printf("Op��o inv�lida. Tente novamente.\n\n");
	                    
	                }
	                //fica em loop enquanto a opcao nao for valida
	                while(opcao_carro < 1 || opcao_carro > QTDE_CARROS);
	                    	
	            	//chama a fun��o para alugar o carro
                    alugar_carro();
                    
                    //limpa a tela
                    printf("\n");
                	system("pause");
                	system("cls");
                	
                	//imprime o menu de opcoes
               	 	menu_opcoes();
               	 	
               	 	//mensagem de debug para saber a qtde de algueis
    				printf("\nQuantidade de alugu�is: %d\n", qtde_alugueis);
                }
                else //Se nao houver cliente cadastrado printa a mensagem
                {
                   	printf("Cadastre o cliente primeiro.\n\n");
                }
                
                break;

            case 2:
            	
            	/* Se nao houver cliente cadastrado e o usuario tentar acessar 
				a op��o de alugar direto mostrara a seguinte mensagem */
                if (cliente_cadastrado == 1)
                {
                	//limpa a tela
                    printf("\n");
                    system("pause");
                    system("cls");
                    
                    //imprime o estoque de carros
                    printf("\t - Estoque de carros - \n\n");
                    imprimir_estoque_carros();
                    printf("\n");
                    
                    do
                    {
	                    //recebe o id do carro
	                    printf("Id do carro desejado: ");
	                    scanf("%d", &opcao_carro);
	                    
	                    if(opcao_carro < 1 || opcao_carro > QTDE_CARROS)
	                    	printf("Op��o inv�lida. Tente novamente.\n\n");
	                    
	                }
	                //fica em loop enquanto a opcao nao for valida
	                while(opcao_carro < 1 || opcao_carro > QTDE_CARROS);
	                    	
	            	//chama a fun��o para alugar o carro
                    alugar_carro();
                    
                    //limpa a tela
                    printf("\n");
                	system("pause");
                	system("cls");
                	
                	//imprime o menu de opcoes
               	 	menu_opcoes();
               	 	
               	 	//mensagem de debug para saber a qtde de algueis
    				printf("\nQuantidade de alugu�is: %d\n", qtde_alugueis);
                }
                else
                {
                   	printf("Cadastre o cliente primeiro.\n\n");
                }
                
                break;
                
            case 3:
                
                //limpa a tela
                printf("\n");
                system("pause");
                system("cls");
                
                //Se tiver alugueis podera acessar a op��o de devolver
                if (qtde_alugueis > 0)
                {                  
                    devolver(); //chama a fun��o devolver
                    
                    //limpa tela
                    printf("\n");
                    system("pause");
                    system("cls");
                    
                    menu_opcoes();
                    
                    //mensagem de debug para saber a qtde de algueis
    				printf("\nQuantidade de alugu�is: %d\n", qtde_alugueis);
    				break;
                    
                }
                else //se nao houver carros alugueis mostra a mensagem abaixo
                {
                    printf("Nenhum aluguel foi realizado ainda.\n\n");
                }
                
                break;
            
            case 4:
            	
            	//Sai do programa
                printf("Saindo...\n");
                break;
        }
    }
    //Ira repetir o programa enquanto o usuario por uma op��o v�lida (1-4)
    while (opcao_menu >= 1 && opcao_menu < 4);
}

void menu_opcoes()
{
	//nome locadroa eh um identificador, ta no topo do c�digo
    printf(NOME_LOCADORA);
    printf("\t1. Cadastrar Cliente\n");
    printf("\t2. Alugar Carro\n");
    printf("\t3. Devolver Carro\n");
    printf("\t4. Sair\n");
}

void armazenar_carros_no_vetor()
{
	//cria��o da variavel local tipo arquivo e o caminho dele
    FILE *arquivo;
    const char *caminho_base = "C:\\Users\\Tomeki\\Desktop\\Carros\\carro_%d.txt"; 
	
	/* la�o de repeti��o para pegar as informa��es 
	contidas nos arquivos e armazenar no vetor de estoque */
    for (int id = 1; id <= QTDE_CARROS; id++) 
    {
        char caminho_arquivo[100];
        
        /* armazena o caminho do arquivo contido em caminho_base
        para a variavel caminho_arquivel */
        sprintf(caminho_arquivo, caminho_base, id);
		
		//abre o arquivo 
        arquivo = fopen(caminho_arquivo, "r");
        
        //se nao tiver nada no arquivo da erro
        if (arquivo == NULL) 
        {
            printf("Erro ao abrir o arquivo %s.\n", caminho_arquivo);
            continue;
        }
		
		//armazena as informa��es do carro no vetor de estoque 
        fgets(estoque_carros[id - 1].carro.modelo, sizeof(estoque_carros[id - 1].carro.modelo), arquivo);
        fgets(estoque_carros[id - 1].carro.cor, sizeof(estoque_carros[id - 1].carro.cor), arquivo);
        fgets(estoque_carros[id - 1].carro.placa, sizeof(estoque_carros[id - 1].carro.placa), arquivo);
        fscanf(arquivo, "%d", &estoque_carros[id - 1].carro.ano);
        fscanf(arquivo, "%d", &estoque_carros[id - 1].qtde_carro_atual);
        fscanf(arquivo, "%f", &estoque_carros[id - 1].valor_aluguel.valor_diaria);
        
        //fecha o arquivo
        fclose(arquivo);
    }
}

void imprimir_estoque_carros()
{
	//imprime o estoque, todos os carros 
    for (int i = 0; i < QTDE_CARROS; i++)
    {
        printf("----------------------------\n\n");
        printf("Informa��es do carro (ID %d):\n", i + 1);
        printf("Modelo: %s", estoque_carros[i].carro.modelo);
        printf("Cor: %s", estoque_carros[i].carro.cor);
        printf("Placa: %s\n", estoque_carros[i].carro.placa);
        printf("Ano: %d\n", estoque_carros[i].carro.ano);
        printf("Qtde dispon�vel: %d\n", estoque_carros[i].qtde_carro_atual);
        printf("Valor di�ria: %.2f\n\n", estoque_carros[i].valor_aluguel.valor_diaria);
    }
    printf("----------------------------\n");
}

void alugar_carro()
{
	//variavel para receber a confirma��o de aluguel
    char opcao_sim_ou_nao;
    
    /* se a qtde do carro for maior ou igual a 1
	 ou seja, se o carro estiver disponivel entra no la�o */
    if (estoque_carros[opcao_carro - 1].qtde_carro_atual >= 1)
    {
        printf("Carro dispon�vel para aluguel.\n\n");
        
        do
        {
	        //Receb a qtde de dias de aluguel
	        printf("Informe a qtde de dias de aluguel: ");
	        scanf("%d", &estoque_carros[opcao_carro - 1].valor_aluguel.qtde_dias);
	        
	        //se o dia de numeros for negativo ou zero imprime a msg
	        if (estoque_carros[opcao_carro - 1].valor_aluguel.qtde_dias < 1)
	        	printf("Qtde de dias inv�lida.\n");
	        	
	        printf("\n");
	        getchar(); 
	    }
	    //fica em loop se o dia de numeros for negativo ou zero
	    while(estoque_carros[opcao_carro - 1].valor_aluguel.qtde_dias < 1);
        
        //multiplica a qtde de dias pelo valor da diaria do carro atual
        estoque_carros[opcao_carro - 1].valor_aluguel.valor_total = 
        estoque_carros[opcao_carro - 1].valor_aluguel.qtde_dias * 
        estoque_carros[opcao_carro - 1].valor_aluguel.valor_diaria;
        
        //imprime um resumo do aluguel
        printf("Carro escolhido: %s", estoque_carros[opcao_carro - 1].carro.modelo);
        printf("Qtde de dias de aluguel: %d\n", estoque_carros[opcao_carro - 1].valor_aluguel.qtde_dias);
        printf("Valor total: %.2f\n\n", estoque_carros[opcao_carro - 1].valor_aluguel.valor_total);
        
        //receba confirma��o
        do
        {
	        printf("Confirmar? (s/n): ");
	        opcao_sim_ou_nao = tolower(getchar());
	        printf("\n");
	        
	        if (opcao_sim_ou_nao != 's' && opcao_sim_ou_nao != 'n')
	        	printf("Op��o inv�lida. Tente novamente.\n\n");
	    }
	    while (opcao_sim_ou_nao != 's' && opcao_sim_ou_nao != 'n');
	    
	    //se a opcao for sim ou nao entra no la�o
        if (opcao_sim_ou_nao == 's' || opcao_sim_ou_nao == 'n')
        {
        	//se a opcao for sim entra no la�o
            if (opcao_sim_ou_nao == 's')
            {
            	//se o saldo do cliente for maior ou igual ao valor total do aluguel
                if (cliente.saldo >= estoque_carros[opcao_carro - 1].valor_aluguel.valor_total)
                {
                	//imprime a msg abaixo
                    printf("Aluguel confirmado!\n\n");
                    
                    system("pause");
                    system("cls");
                    
                    //deixa o carro indisponivel
                    estoque_carros[opcao_carro - 1].qtde_carro_atual = 0;
                    
                    //incrementa a qtde de alugueis e salva em arquivo
                    qtde_alugueis++;
                    salvar_qtde_alugueis();
                    
                    //incrementa o id de aluguel
                    id_aluguel++;
                    
                    //salva as informacoes do aluguel em arquivo
                    salvar_informacoes_aluguel();
                    
                    //salva o id do aluguel em arquivo
                    salvar_id_aluguel();
                    
                    //para poder alugar outro carro com o mesmo cpf inserido desativei isso
                    //no caso com ele ativado teria que cadastrar outro cliente para poder alugar
                    //cliente_cadastrado = 0; 
                    
                    //atualiza a qtde do carro atual no arquivo original dele
                    atualizar_qtde_carro(opcao_carro);
                }
                else //se nao tiver saldo suficiente imprime a mensagem
                {
                    printf("Saldo insuficiente para aluguel.\n");
                    printf("Voltando para menu, selecione alugar para ver outra op��o de carro.\n");
                }
            }
            else //se nao confirmar volta para o menu de opcoes
            {
                printf("Voltando para menu, selecione alugar para ver outra op��o de carro.\n");
            }
        }
    }
    //se o carro nao estiver disponivel
    else 
    {
        printf("Carro indispon�vel para aluguel.\n");
        printf("Voltando para menu, selecione alugar para ver outra op��o de carro.\n");
    }
    
}

void salvar_informacoes_aluguel() 
{
	//cria variavel local do tipo arquivo
    FILE *arquivo;
    
    //salva o caminho na variavel caminho_arquivo
    char caminho_arquivo[100];
    const char *caminho_pasta = "C:\\Users\\Tomeki\\Desktop\\Alugados";
    sprintf(caminho_arquivo, "%s\\aluguel_%d.txt", caminho_pasta, id_aluguel);
    
    //abre o arquivo
    arquivo = fopen(caminho_arquivo, "w");
    
    //se o caminho estiver invalido
    if (arquivo == NULL) 
        printf("Erro ao criar o arquivo %s.\n", caminho_arquivo);
    
    //cria e salva um arquivo com as informa��es o aluguel atual
    fprintf(arquivo, "CPF: %s\n", cliente.cpf);
    fprintf(arquivo, "Placa: %s\n", estoque_carros[opcao_carro - 1].carro.placa);
    fprintf(arquivo, "Valor Total: %.2f\n", estoque_carros[opcao_carro - 1].valor_aluguel.valor_total);
    
    //fecha o arquivo
    fclose(arquivo);
    
    printf("Informa��es do aluguel salvas com sucesso em %s\n\n", caminho_arquivo);
}

void salvar_qtde_alugueis() 
{
	//cria variavel local do tipo arquivo e salva o caminho
    FILE *arquivo;
    const char *caminho_arquivo = "C:\\Users\\Tomeki\\Desktop\\QtdeAlugueis\\qtde_alugueis.txt";
    
    //abre o arquivo como writer, escrita
    arquivo = fopen(caminho_arquivo, "w");
    
    //se o caminho estiver invalido da erro
    if (arquivo == NULL) 
    {
        printf("Erro ao criar o arquivo %s.\n", caminho_arquivo);
        return;
    }
    
    //salva a qtde de alugueis
    fprintf(arquivo, "%d\n", qtde_alugueis);
    
    //fecha o arquivo
    fclose(arquivo);
    
    printf("Quantidade de alugu�is salva com sucesso em %s\n\n", caminho_arquivo);
}

void carregar_qtde_alugueis() 
{
	//cria variavel local do tipo arquivo e salva o caminho
    FILE *arquivo;
    const char *caminho_arquivo = "C:\\Users\\Tomeki\\Desktop\\QtdeAlugueis\\qtde_alugueis.txt";
    
    //abre o arquivo como read, leitura
    arquivo = fopen(caminho_arquivo, "r");
    
    //se o caminho estiver errado da erro
    if (arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo %s.\n", caminho_arquivo);
        return;
    }
    
    //importa a informa��o contida no arquivo e salva na variavel
    fscanf(arquivo, "%d", &qtde_alugueis);
    
    //fecha o arquivo
    fclose(arquivo);
    
    printf("Quantidade de alugu�is carregada com sucesso de %s\n\n", caminho_arquivo);
}

void carregar_id_aluguel() 
{
	//cria variavel local do tipo arquivo e salva o caminho
    FILE *arquivo;
    const char *caminho_arquivo = "C:\\Users\\Tomeki\\Desktop\\QtdeALugueis\\id_alugueis.txt";
     
	//abre o arquivo como read, leitura
    arquivo = fopen(caminho_arquivo, "r");
    
    //se o caminho estiver errado da erro
    if (arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo %s.\n", caminho_arquivo);
        return;
    }
    
    //importa a informa��o e carrega na variavel
    fscanf(arquivo, "%d", &id_aluguel);
    
    //fecha o arquivo
    fclose(arquivo);
    
    printf("ID do aluguel carregado com sucesso de %s\n\n", caminho_arquivo);
}

void salvar_id_aluguel() 
{
	//cria variavel local do tipo arquivo e salva o caminho
    FILE *arquivo;
    const char *caminho_arquivo = "C:\\Users\\Tomeki\\Desktop\\QtdeALugueis\\id_alugueis.txt";
    
    //abre o arquivo como writer, escrita
    arquivo = fopen(caminho_arquivo, "w");
    
    //se o caminho estiver errado da erro
    if (arquivo == NULL) 
    {
        printf("Erro ao criar o arquivo %s.\n", caminho_arquivo);
        return;
    }
    
    //salva as informa��es contida no arquivo na variavel
    fprintf(arquivo, "%d\n", id_aluguel);
    
    //fecha o arquivo
    fclose(arquivo);
    
    printf("ID do aluguel salvo com sucesso em %s\n\n", caminho_arquivo);
}

void atualizar_qtde_carro(int id) 
{
    // Declara um ponteiro para o arquivo
    FILE *arquivo;
    
    // Declara uma string para armazenar o caminho do arquivo
    char caminho_arquivo[100];
    
    // Declara uma string constante que � a base do caminho dos arquivos dos carros
    const char *caminho_base = "C:\\Users\\Tomeki\\Desktop\\Carros\\carro_%d.txt";
    
    // Formata o caminho do arquivo com o id do carro
    sprintf(caminho_arquivo, caminho_base, id);

    // Abre o arquivo no modo "r+" (leitura e escrita, sem truncar o arquivo)
    arquivo = fopen(caminho_arquivo, "r+");
    
    if (arquivo == NULL) 
    {
        // Se n�o conseguir abrir o arquivo, imprime uma mensagem de erro e retorna
        printf("Erro ao abrir o arquivo %s.\n", caminho_arquivo);
        return;
    }

    // Declara um buffer para armazenar linhas lidas do arquivo
    char buffer[100];
    
    // L� e descarta as primeiras 4 linhas do arquivo (assumindo que essas linhas cont�m informa��es que n�o queremos alterar)
    for (int i = 0; i < 4; i++) 
    {
        fgets(buffer, sizeof(buffer), arquivo);
    }

    // Move o ponteiro do arquivo para a posi��o atual (ap�s a leitura das 4 linhas)
    fseek(arquivo, ftell(arquivo), SEEK_SET);
    
    // Escreve a nova quantidade de carros dispon�veis no arquivo
    fprintf(arquivo, "%d\n", estoque_carros[id - 1].qtde_carro_atual);

    // Fecha o arquivo
    fclose(arquivo);

    // Imprime uma mensagem confirmando que a quantidade do carro foi atualizada com sucesso
    printf("Quantidade do carro (ID %d) atualizada com sucesso em %s\n\n", id, caminho_arquivo);
}

void devolver() 
{
    // Declara um array para armazenar os �ndices dos carros alugados
    int carros_alugados[QTDE_CARROS];
    
    // Declara um contador para o n�mero de carros alugados
    int contador = 0;

    // Imprime um cabe�alho para a lista de carros alugados
    printf("\t - Carros atualmente alugados - \n\n");

    // Percorre o estoque de carros para identificar quais est�o alugados
    for (int i = 0; i < QTDE_CARROS; i++) 
    {
        // Verifica se o carro est� alugado (quantidade de carros dispon�vel � 0)
        if (estoque_carros[i].qtde_carro_atual == 0) 
        {
            // Imprime as informa��es do carro alugado
            printf("%d. Modelo: %sPlaca: %s\n\n", contador + 1, estoque_carros[i].carro.modelo, estoque_carros[i].carro.placa);
            
            // Armazena o �ndice do carro alugado no array
            carros_alugados[contador] = i;
            
            // Incrementa o contador
            contador++;
        }
    }
	
    // Verifica se n�o h� carros alugados
    if (contador == 0) 
    {
        // Informa ao usu�rio que n�o h� carros alugados no momento
        printf("Nenhum carro est� alugado no momento.\n");
        return;
    }

    // Declara uma vari�vel para armazenar a op��o do usu�rio
    int opcao;
    
    // Pede ao usu�rio para digitar o n�mero correspondente ao carro que deseja devolver
    printf("\nDigite o n�mero correspondente ao carro que deseja devolver: ");
    scanf("%d", &opcao);

    // Verifica se a op��o � inv�lida (fora do intervalo de carros alugados)
    if (opcao < 1 || opcao > contador) 
    {
        // Informa ao usu�rio que a op��o � inv�lida
        printf("Op��o inv�lida.\n");
        return;
    }

    // Obt�m o �ndice do carro a ser devolvido
    int id_carro = carros_alugados[opcao - 1];
    
    // Atualiza a quantidade de carros dispon�veis para 1 (devolvido)
    estoque_carros[id_carro].qtde_carro_atual = 1;
    
    // Informa ao usu�rio que o carro foi devolvido com sucesso
    printf("Carro com placa %s devolvido com sucesso.\n\n", estoque_carros[id_carro].carro.modelo, estoque_carros[id_carro].carro.placa);

    // Decrementa a quantidade total de alugu�is
    qtde_alugueis--;
    
    // Salva a nova quantidade de alugu�is em um arquivo
    salvar_qtde_alugueis();

    // Atualiza a quantidade de carros dispon�veis no arquivo correspondente
    atualizar_qtde_carro(id_carro + 1);
}
