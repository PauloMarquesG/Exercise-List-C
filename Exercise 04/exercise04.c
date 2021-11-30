/*
Author: Paulo Marques Gonçalves;
Exercise: Escreva um programa em C que leia o raio de um círculo, calcule sua área e perímetro e imprima na tela.
			Defina uma constante PI = 3,1415
*/
#include<stdio.h>
#include<locale.h>
#define PI 3.1415

int main (){
	setlocale(LC_ALL,"Portuguese");
	float raio,area;
	printf("Digite o raio de um círculo:\n");
	scanf("%f", &raio);
	area = PI*(raio*raio);
	system("cls");
	printf("A área do círculo é %.2f", area);
	return 0;
}
