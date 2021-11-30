/*
Author: Paulo Marques Gonçalves;
Exercise: Dado um número inteiro n >= 0, calcular o fatorial de n (n!);
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main (){
setlocale(LC_ALL,"Portuguese");
	int n,fat;
	do{
		printf("Digite um valor inteiro para ser fatorado!\n");
		scanf("%d", &n);
	}while(n<=0);
	fat=1;
	system("cls");
	printf("O fatorial de %d!",n);
	do{
		fat *= n;
		n--;
	}while(n>1);
	/*while(n>1){
		fat *= n;
		n--;
	}*/
	// A escolha do do{}while(); ou while{} é indiferente
	printf(" é %d\n",fat);
	return 0;
}
