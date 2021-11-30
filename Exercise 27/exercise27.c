/*
Author: Paulo Marques Gonçalves;
Exercise: Escreva um programa que leia uma frase, conte e exiba a quantidade de palavras digitadas;
*/
#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
	char frase[50]; 
	char *t; //ponteiro para a frase
	int palavras=0;
	
	puts("Escreva uma frase de até 50 caracteres:");
	gets(frase);
	
	t = strtok(frase," ");
	while(t != NULL){
		palavras+=1;
		t = strtok(NULL," ");
	}
	
	printf("\nTotal de palavras na frase: %d",palavras);
	
	return 0;
}
