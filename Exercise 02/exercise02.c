/*
Author: Paulo Marques Gon�alves;
Exercise: Elabore um programa em C que leia peso e altura de um indiv�duo, calcule e exiba seu �ndice de massa corp�rea (IMC). Sendo o IMC =  peso/altura 2;
*/
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	float peso,altura,imc;
	printf("Digite o seu peso em quilogramas: (Ex:0,00)\n");
	scanf("%f", &peso);
	printf("Digite a sua altura em metros: (Ex:0,00)\n");
	scanf("%f", &altura);
	imc = peso/(altura*altura);
	printf("O seu �ndice de massa corp�rea � de %.2f", imc);
	return 0;
}
