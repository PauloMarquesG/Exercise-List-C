/*
Author: Paulo Marques Gonçalves;
Exercise: Elabore um programa em C que imprima seu minicurrículo (nome, idade, formação, profissão, tempo de experiência);
*/
#include <stdio.h>
#include <locale.h>
int main (){
setlocale(LC_ALL,"Portuguese");
	printf("\aOlá, me chamo Paulo Marques Gonçalves, tenho 18 anos.\n\n"); //nome, idade
	printf("Tenho ensino médio técnico na ETEC São Mateus, no curso de Informática para internet\n\n"); //formação
	printf("Atualmente faço estágio em uma empresa onde faço a análise e correção de sistemas em pl/sql\n\n"); //profissão
	printf("Tenho quase 4 anos de experiência com lógica de programação\n\nlinguagens:\n"); //experiência
	printf(" - C++ \n - PHP\n - Java\n - Phyton\n - Mysql\n - Pl/sql\n - HTML 5\n - CSS 3\n - JavaScript\n - VBA\n");
	printf("\n:]");
	return 0;
}
