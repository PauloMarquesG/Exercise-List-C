/*
Author: Paulo Marques Gon�alves;
Exercise: Escreva um programa em C que leia a quantidade de faltas de um aluno e sua m�dia e informe seu conceito final, sendo:
		  * Faltas > 5 => Conceito F;
		  * Faltas <=5 e M�dia <6 => Conceito C;
		  * Faltas <=5 e 6<= M�dia <7.5 => Conceito B;
		  * Faltas <=5 e 7.5<= M�dia <9 => Conceito A;
		  * Faltas <=5 e M�dia >= 9 => Conceito  E;
*/
#include<stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL,"Portuguese");
	float media;
	int faltas;
	printf("Digite a m�dia do aluno:\n");
	scanf("%f",&media);
	printf("Digite a quantidade de faltas do aluno:\n");
	scanf("%d",&faltas);
	if (faltas>5) {
		printf("O conceito do aluno � F");
	}else if (faltas<=5 && media<6) {
		printf("O conceito do aluno � C");
	}else if (faltas<=5 && media<7.5) {
		printf("O conceito do aluno � B");
	}else if (faltas<=5 && media<9) {
		printf("O conceito do aluno � A");
	}else if (faltas<=5 && media>=9) {
		printf("O conceito do aluno � E");
	}else{
		return 1;
	}
	return 0;
}
