/*
Author: Paulo Marques Gon�alves;
Exercise: Quais os valores das vari�veis x e y ap�s a execu��o dessas instru��es?
			Seja x=3 e a instru��o y = x * (x + 1) * x++;
			Seja x=5, y = 3 e a instru��o y *= x+1;
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h.>
int main (){
setlocale(LC_ALL,"Portuguese");
	int x=3,y;
	printf("Condi��o 01:\nSeja x = 3 e a instru��o y = x * (x + 1) * x++)");
	y = x * (x + 1) * x++;
	printf("\nValor de x �: %d",x);
	printf("\nValor de y �: %d",y);
	
	x=5;y=3;
	printf("\n\nCondi��o 02:\nSeja x = 5 e y = 2 ea instru��o y *= x+1");
	y *= x+1;
	printf("\nValor de x �: %d",x);
	printf("\nValor de y �: %d",y);
	printf("\n");
	system("pause");
	return 0;
}
