/*
Author: Paulo Marques Gonçalves;
Exercise: Dados os coeficientes (a, b e c) de uma equação do 2º grau, calcule e informe suas raízes reais, usando a fórmula de Báskara;
*/
#include<stdio.h>
#include<locale.h>
#include<math.h>
int main (){
setlocale(LC_ALL,"Portuguese");
	float a,b,c,delta,x1,x2;
	printf("Equação de 2º grau : ax²+bx+c=0\n");
	printf("Digite o valor de a:\n");
	scanf("%f",&a);
	printf("Digite o valor de b:\n");
	scanf("%f",&b);
	printf("Digite o valor de c:\n");
	scanf("%f",&c);
	delta = (pow(b,2))-(4*a*c);
	x1 = (-b+delta)/2*a;
	x2 = (-b-delta)/2*a;
	printf("\nX1 = %.1f\nX2 = %.1f",x1,x2);
	return 0;
}
