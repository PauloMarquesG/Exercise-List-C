/*
Author: Paulo Marques Gon�alves;
Exercise: Elabore um programa em C que imprima seu minicurr�culo (nome, idade, forma��o, profiss�o, tempo de experi�ncia);
*/
#include <stdio.h>
#include <locale.h>
int main (){
setlocale(LC_ALL,"Portuguese");
	printf("\aOl�, me chamo Paulo Marques Gon�alves, tenho 18 anos.\n\n"); //nome, idade
	printf("Tenho ensino m�dio t�cnico na ETEC S�o Mateus, no curso de Inform�tica para internet\n\n"); //forma��o
	printf("Atualmente fa�o est�gio em uma empresa onde fa�o a an�lise e corre��o de sistemas em pl/sql\n\n"); //profiss�o
	printf("Tenho quase 4 anos de experi�ncia com l�gica de programa��o\n\nlinguagens:\n"); //experi�ncia
	printf(" - C++ \n - PHP\n - Java\n - Phyton\n - Mysql\n - Pl/sql\n - HTML 5\n - CSS 3\n - JavaScript\n - VBA\n");
	printf("\n:]");
	return 0;
}
