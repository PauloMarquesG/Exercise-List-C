/*
Author: Paulo Marques Gonçalves;
Exercise: Escreva a função minimax (v, n, a, b), que recebe um vetor v, com n valores reais e devolvem em a e b os valores mínimo e máximo entre aqueles armazenados em v;
*/
#include<stdio.h>

void minimax (double v[], int tam, double *a, double *b){
	int x;
	*a = v[0];
	for(x=0;x<tam;x++){
		if(*a>v[x])*a = v[x];
		if(*b<v[x])*b = v[x];
	}
}

int main(){
	int tam,j;
	double x,y;
	
	printf("Digite a quantidade de valores para o vetor v[]:\n");
	scanf("%d", &tam);
	system("cls");
	double v[tam];
	
	for(j = 0; j < tam; j++){
		printf("Digite uma valor para o vetor:\n");
		scanf("%lf", &v[j]);
	}
	
	minimax(v, tam, &x, &y);
	system("cls");
	printf("O vetor V[%d] ficou assim:\n",tam);
	for(j = 0; j < tam; j++){
		printf("(%.2lf) ",v[j]);
	}
	printf("\n\nMenor valor | Maior valor\n    %.2lf    |     %.2lf", x, y);
	return 0;
}
