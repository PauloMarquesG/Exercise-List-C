/*
Author: Paulo Marques Gon�alves;
Exercise: Escreva um programa em C que leia o raio de um c�rculo, calcule sua �rea e per�metro e imprima na tela.
			Defina uma constante PI = 3,1415
*/
#include<stdio.h>
#include<locale.h>
#define PI 3.1415

int main (){
	setlocale(LC_ALL,"Portuguese");
	float raio,area;
	printf("Digite o raio de um c�rculo:\n");
	scanf("%f", &raio);
	area = PI*(raio*raio);
	system("cls");
	printf("A �rea do c�rculo � %.2f", area);
	return 0;
}
