/*
Author: Paulo Marques Gon�alves;
Exercise: Codifique um programa que leia uma temperatura em fahrenheit e informe seu valor correspondente em Celsius.
			Lembrando da f�rmula de convers�o: Celsius = (Fahrenheit-32)*5/9;
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
	printf("A temperatura em Celsius � %.2f �C", c);
	return 0;
}
