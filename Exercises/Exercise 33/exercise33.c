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
*/
#include<stdio.h>
#include"turma.h"
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
	Aluno registro[5];
	LeAlunos(registro,5);
	Imprime(registro,5);
	return 0;
}
