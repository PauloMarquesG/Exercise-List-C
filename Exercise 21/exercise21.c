/*
Author: Paulo Marques Gon�alves;
Exercise: Codifique uma fun��o recursiva que calcule o produto de dois naturais usando soma;
*/
#include<stdio.h>
#include<locale.h>

double produto(double a, double b){
	if (b==0){return 0;}		//solu��o trivial
	return (a+produto(a,b-1));	//solu��o geral
}

int main () {
setlocale(LC_ALL,"Portuguese");
	double num1,num2;
	
	do{
	printf("Digite dois valores para a multiplica��o:\n");
	scanf("%lf %lf", &num1, &num2);
	}while(num1<0 || num2<0);
	
	printf("A multiplica��o de %.2lf * %.2lf = %.2lf",num1,num2,produto(num1,num2));
	
	return 0;
}
