/*
Author: Paulo Marques Gon�alves;
Exercise: Codifique um programa para:
		  * Ler as 2 notas dos 10 alunos de uma turma
		  * Calcular e armazenar a m�dia de cada aluno;
		  * A m�dia de cada aluno;
		  * Se o aluno est� na m�dia, acima ou abaixo;
*/
#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
	double nota[3][10], mediaTurma;
	int x,z;
	
	for(x=0;x<10;x++){
		for(z=0;z<2;z++){
			printf("Digite a %d� nota do %d� aluno:\n",z+1,x+1);
			scanf("%lf", &nota[z][x]);
		}
		nota[2][x]=(nota[0][x]+nota[1][x])/2;
		mediaTurma+=nota[2][x];
	}
	mediaTurma /= 10;
	system("cls");
	for(x=0;x<10;x++){
		printf("A m�dia do %d� aluno �: %.2lf\n",x+1 , nota[2][x]);
		if(nota[2][x]>mediaTurma)printf("O aluno est� acima da m�dia da turma!\n\n");
		else if(nota[2][x]=mediaTurma)printf("O aluno est� na m�dia da turma!\n\n");
		else printf("O aluno est� abaixo da m�dia da turma!\n\n");
	}
	
		
return 0;
}
