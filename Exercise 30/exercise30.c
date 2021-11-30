/*
Author: Paulo Marques Gonçalves;
Exercise: Escreva uma função ordena (a, b) que receba dois inteiros a e b e devolva o menor deles em a e o maior em b;
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
	printf("\nOrdenando os valores...\nO novo valor na váriavel A é %d, e na variável b é %d",a,b);
	return 0;	
}
