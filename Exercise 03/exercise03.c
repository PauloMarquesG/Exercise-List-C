/*
Author: Paulo Marques Gonçalves;
Exercise: Codifique um programa que leia uma temperatura em fahrenheit e informe seu valor correspondente em Celsius.
			Lembrando da fórmula de conversão: Celsius = (Fahrenheit-32)*5/9;
*/
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	float f,c;
	printf("Digite a temperatura em fahrenhiet:\n");
	scanf("%f", &f);
	c = (f-32)*5/9;
	system("cls");
	printf("A temperatura em Celsius é %.2f °C", c);
	return 0;
}
