/*
Author: Paulo Marques Gon�alves;
Exercise: Dado N >= 0 inteiro e X real, calcular X elevado a pot�ncia N (sem usar pow).
*/
#include<stdio.h>
#include<locale.h>
int main () {
setlocale(LC_ALL,"Portuguese");
	int n,j;
	float x;
	do{
		printf("Digite um valor inteiro:\n");
		scanf("%d", &n);
	}while (n<=0);
	printf("Digite um valor:\n");
	scanf("%f", &x);
	system("cls");
	printf("A pot�ncia de %.2f^%d",x,n);
	for(j=1;j<n;j++){
		x *= x; 
	}
	printf(" � %.2f\n",x);
	system("pause");
	return 0;
}
