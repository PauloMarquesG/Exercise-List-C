/*
Author: Paulo Marques Gon�alves;
Exercise: Dado um caracter, informe seu c�digo ASCII em octal, decimal e hexadecimal;
*/
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	char var;
	printf("Digite um caractere qualquer:\n");
	scanf("%c", &var);
	system("cls");
	printf("O caracter escolhido foi %c\nOctal: %o\nDecimal: %d\nHexadecimal: %x", var,var,var,var);
	return 0;
}
