/*
Author: Paulo Marques Gon�alves;
Exercise: Escreva uma fun��o ordena (a, b) que receba dois inteiros a e b e devolva o menor deles em a e o maior em b;
*/
#include<stdio.h>
#include<locale.h>

void ordena(int *x, int *y){
	if(*x>*y){
		int aux = *x;
		*x = *y;
		*y = aux;
	}
}

int main(){
setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Digite um valor para A:\n");
	scanf("%d", &a);
	printf("Digite um valor para B:\n");
	scanf("%d", &b);
	ordena(&a,&b);
	printf("\nOrdenando os valores...\nO novo valor na v�riavel A � %d, e na vari�vel b � %d",a,b);
	return 0;	
}
