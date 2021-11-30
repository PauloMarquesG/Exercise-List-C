/*
Author: Paulo Marques Gonçalves;
Exercise: Dado um inteiro n, informe se n é par ou ímpar usando o operador condicional ternário.
*/
#include<stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL,"Portuguese");
	int num1;
	printf("Digite um valor:\n");
	scanf("%d",&num1);
	num1%2==0 ? printf("O número %d é Par!",num1) : printf("O número %d é Ímpar!",num1);
	return 0;
}
