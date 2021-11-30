/*
Author: Paulo Marques Gonçalves;
Exercise: Codifique a função rodizio(placa), que recebe um número de 4 dígitos representando a placa de um veículo e exibe o dia em ele está no rodízio;
*/
#include<stdio.h>
#include<locale.h>

void rodizio (int placa){
	switch (placa%10){
		case 1:
		case 2:
			printf("O dia de ródizo do seu carro é das 23h da Segunda-feira às 5h de Terça-feira\n");
			break;
		case 3:
		case 4:
			printf("O dia de ródizo do seu carro é das 23h da Terça-feira às 5h de Quarta-feira\n");
			break;
		case 5:
		case 6:
			printf("O dia de ródizo do seu carro é das 23h da Quarta-feira às 5h de Quinta-feira\n");
			break;
		case 7:
		case 8:
			printf("O dia de ródizo do seu carro é das 23h da Quinta-feira às 5h de Sexta-feira\n");
			break;
		case 9:
		case 0:
			printf("O dia de ródizo do seu carro é das 23h da Sexta-feira às 5h de Sábado\n");
			break;
	}
}

int main (){
   		setlocale(LC_ALL,"Portuguese");
	int placa;
	printf("Digite os quatro (4) digitos da placa do seu veículo para saber qual o seu dia de rodízio:\n");
	scanf("%d", &placa);
	rodizio(placa);
	return 0;
}
