/*
Author: Paulo Marques Gon�alves;
Exercise: Escreva um programa que leia uma cadeia de caracteres e imprima a mesma de tr�s pra frente. Sugest�o: Utilize a fun��o strlen() para saber o tamanho da frase;
*/
#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
	char texto[50];
	int x,tamanho;
	puts("Digite uma sequ�ncia de caracteres:");
	gets(texto);
	tamanho = strlen(texto);
	printf("\nO texto escrito a cima invertido fica:");
	for(x=tamanho;x>=0;x--){
		printf("%c",texto[x]);
	}
	return 0;
}
