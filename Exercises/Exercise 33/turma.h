/*
Author: Paulo Marques Gonçalves;
Exercise: Elabore um programa que leia, armazene e exiba os dados de uma turma de 5 alunos.
			Cada Aluno deve informar:
			  * Nome (char[21]);
			  * Matricula (char[9]);
			  * Média final (float);

			Para isso, codifique e utilize as seguintes rotinas:
			  * LeAlunos(t[], n): solicita ao usuário que digite os dados de n alunos e armazena em t;
			  * Imprime(t[], n): exibe na tela os dados armazenados em t;
turma.h
*/

typedef struct{
	char nome[21];
	char matricula[9];
	float media;
}Aluno;

void LeAlunos(Aluno t[], int n){
	int x;
	for(x=0;x<n;x++){
		printf("Nome: ");
		gets(t[x].nome);
		printf("Número de matricula: ");
		gets(t[x].matricula);
		printf("Média final: ");
		scanf("%f%*c",&t[x].media);
		printf("\n");
	}
}

void Imprime(Aluno t[], int n){
	int x;
	system("cls");
	printf("<< Lista de alunos >>\n");
	for(x=0;x<n;x++){
		printf("\nNome do %dº aluno: %s",x+1 ,t[x].nome);
		printf("\nNúmero de matricula: %s",t[x].matricula);
		printf("\nMédia final: %.2f\n",t[x].media);
	}
}
