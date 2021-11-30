/*
Author: Paulo Marques Gonçalves;
Exercise: Escreva um programa que leia uma cadeia de caracteres e imprima a mesma de trás pra frente. Sugestão: Utilize a função strlen() para saber o tamanho da frase;
*/
#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
	char texto[50];
	int x,tamanho;
	puts("Digite uma sequência de caracteres:");
	gets(texto);
	tamanho = strlen(texto);
	printf("\nO texto escrito a cima invertido fica:");
	for(x=tamanho;x>=0;x--){
		printf("%c",texto[x]);
	}
	return 0;
}
