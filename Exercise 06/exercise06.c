/*
Author: Paulo Marques Gon�alves;
Exercise: Dado um inteiro n, informe se n � par ou �mpar usando o operador condicional tern�rio.
*/
#include<stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL,"Portuguese");
	int num1;
	printf("Digite um valor:\n");
	scanf("%d",&num1);
	num1%2==0 ? printf("O n�mero %d � Par!",num1) : printf("O n�mero %d � �mpar!",num1);
	return 0;
}
