/*
Author: Paulo Marques Gonçalves;
Exercise: Quais os valores das variáveis x e y após a execução dessas instruções?
			Seja x=3 e a instrução y = x * (x + 1) * x++;
			Seja x=5, y = 3 e a instrução y *= x+1;
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h.>
int main (){
setlocale(LC_ALL,"Portuguese");
	int x=3,y;
	printf("Condição 01:\nSeja x = 3 e a instrução y = x * (x + 1) * x++)");
	y = x * (x + 1) * x++;
	printf("\nValor de x é: %d",x);
	printf("\nValor de y é: %d",y);
	
	x=5;y=3;
	printf("\n\nCondição 02:\nSeja x = 5 e y = 2 ea instrução y *= x+1");
	y *= x+1;
	printf("\nValor de x é: %d",x);
	printf("\nValor de y é: %d",y);
	printf("\n");
	system("pause");
	return 0;
}
