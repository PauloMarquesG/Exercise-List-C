/*
Author: Paulo Marques Gon�alves;
Exercise: Codifique um programa de teste para a rotina max();
*/
#include<stdio.h>
#include<locale.h>

double max(double a, double b){
	if (a > b){
		return a;
	}
	return b;
}

int main (){
setlocale(LC_ALL,"Portuguese");
	double y, a, b;
	printf("Insira dois valores para serem usados na fun��o max(a,b):\n");
	scanf("%lf %lf", &a, &b);
	y = max(a,b);
	printf("%.2lf � o maior valor inserido na fun��o max", y);
	
	return 0;
}
