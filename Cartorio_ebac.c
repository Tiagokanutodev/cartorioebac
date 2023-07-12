#include <stdio.h> //biblioteca de comunicaçâo com o usuario
#include <stdlib.h> //biblioteca de alocaçâo de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por regiâo
#include <string.h> //biblioteca responsavel por cuidar das strings

int Registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Responsavel pot copiar o valor das strings
	
	FILE *file; //criar arquivo
	file = fopen(arquivo, "w"); //crie o arquivo
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}

int Consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("Nao foi possivel abrir o arquivo, nao localizado!. \n");
	}
	
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("\n Essas sao as informaçoes do usuario: ");
		printf("%s", conteudo);
		printf("\n \n");		
		
	}
	
	system("pause");
}

int Deletar()
{
	printf("voce escolheu deletar nomes! \n");
	system("pause");
}



int main()
    {
	int opcao = 0; // Variavel opcao;
	int laco = 1;
	
	for(laco = 1; laco = 1;)
	{
	
	    system("cls");
	    
	    setlocale(LC_ALL, "Portugues"); // Localidade idioma; 
	
	    printf("### Cartorio da EBAC ### \n \n \n");
	    printf("Escolha a opcao de acesso no menu: \n \n \n");
	    printf("\t 1 Registrar nomes \n \n");
	    printf("\t 2 Consultar nomes \n \n");
	    printf("\t 3 Deletar nomes \n \n \n");
	    printf("opcao: ");
	
	    scanf("%d" , &opcao); // Armazena a escolha do usuario; 
	
	    system("cls");
	    
	    
	    switch(opcao)
		{
			case 1: 
			Registro();
		    break;
			
			case 2:
			Consulta();
			break;
			
			case 3:
			Deletar();
		    break;
		    		    		    
		    default:
			printf("Opcao invalida, por favor tentar novamente! \n");
		    system("pause");
			break;					
	   }
   } 
				
   }
   
