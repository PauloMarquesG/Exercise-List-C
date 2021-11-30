/*
Author: Paulo Marques Gonçalves;
Exercise: Codifique uma função recursiva que calcule o produto de dois naturais usando soma;
*/
#include<stdio.h>
#include<locale.h>

double produto(double a, double b){
	if (b==0){return 0;}		//solução trivial
	return (a+produto(a,b-1));	//solução geral
}

int main () {
setlocale(LC_ALL,"Portuguese");
	double num1,num2;
	
	do{
	printf("Digite dois valores para a multiplicação:\n");
	scanf("%lf %lf", &num1, &num2);
	}while(num1<0 || num2<0);
	
	printf("A multiplicação de %.2lf * %.2lf = %.2lf",num1,num2,produto(num1,num2));
	
	return 0;
}
