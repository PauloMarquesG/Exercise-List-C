/*
Author: Paulo Marques Gonçalves;
Exercise: O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos.
			Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto;
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main (){
setlocale(LC_ALL,"Portuguese");
	int n,x,quad,impar=1;
	printf("Digite um valor natural:\n");
	scanf("%d", &n);
	system("cls");
	for(x=1;x<n;x++){	
		impar +=2;
		quad += impar;
	}
	printf("O quadrado de %d é igual a %d\n",n,quad);
	system("pause");
	return 0;
}
