/*
Author: Paulo Marques Gon�alves;
Exercise: O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares consecutivos.
			Dado um n�mero n, calcule seu quadrado usando a soma de �mpares ao inv�s de produto;
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
	printf("O quadrado de %d � igual a %d\n",n,quad);
	system("pause");
	return 0;
}
