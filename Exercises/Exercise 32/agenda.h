/*
Author: Paulo Marques Gonçalves;
Exercise: Defina a estrutura PESSOA com:
		  * Nome
		  * Telefone
		  * Data de nascimento
		Antes, não esqueça de definir a estrutura DATA. Implemente um programa que solicite os dados do seu melhor amigo; armazene numa variável do tipo PESSOA.
		Em seguida imprima os dados desta variável na tela;
agenda.h
*/

typedef struct{
	int dia;
	int mes;
	int ano;
}Data;

typedef struct{
	char nome[31];
	char fone[21];
	Data nasc;
}Pessoa;

void LeAgenda(Pessoa ag[], int n){
	int x;
	
	for(x=0;x<n;x++){
		printf("\n%dº Nome: ",x+1);
		gets(ag[x].nome);
		printf("\nFone: ");
		gets(ag[x].fone);
		printf("\nDia Mes Ano do nascimento: ");
		scanf("%d %d %d%*c",&ag[x].nasc.dia, &ag[x].nasc.mes, &ag[x].nasc.ano);
	}
}

void ImprimeAgenda(Pessoa ag[], int n){
	int x;
	system("cls");
	printf("<< Lista de amigos >>\n");
	for(x=0;x<n;x++){
		printf("%dº",x+1);
		printf("\nNome: %s",ag[x].nome);
		printf("\nFone: %s",ag[x].fone);
		printf("\nData de nascimento: %d/%d/%d",ag[x].nasc.dia, ag[x].nasc.mes, ag[x].nasc.ano);
	}
}
