/*
Author: Paulo Marques Gonçalves;
Exercise: Dados os dígitos da placa de um carro, informe o dia do seu rodízio.
			Lembrando que o operador % (resto da divisão inteira) pode nos auxiliar a selecionar o ultimo dígito de um número inteiro;
*/
#include<stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL,"Portuguese");
	int placa;
	printf("Digite a placa do carro (Ex: 0000):\n");
	scanf("%d",&placa);
	switch (placa%10){
		case 1:
			printf("O dia de ródizo do seu carro é das 23h da Segunda-feira às 5h de Terça-feira\n");
			break;
		case 2:
			printf("O dia de ródizo do seu carro é das 23h da Segunda-feira às 5h de Terça-feira\n");
			break;
		case 3:
			printf("O dia de ródizo do seu carro é das 23h da Terça-feira às 5h de Quarta-feira\n");
			break;
		case 4:
			printf("O dia de ródizo do seu carro é das 23h da Terça-feira às 5h de Quarta-feira\n");
			break;
		case 5:
			printf("O dia de ródizo do seu carro é das 23h da Quarta-feira às 5h de Quinta-feira\n");
			break;
		case 6:
			printf("O dia de ródizo do seu carro é das 23h da Quarta-feira às 5h de Quinta-feira\n");
			break;
		case 7:
			printf("O dia de ródizo do seu carro é das 23h da Quinta-feira às 5h de Sexta-feira\n");
			break;
		case 8:
			printf("O dia de ródizo do seu carro é das 23h da Quinta-feira às 5h de Sexta-feira\n");
			break;
		case 9:
			printf("O dia de ródizo do seu carro é das 23h da Sexta-feira às 5h de Sábado\n");
			break;
		case 0:
			printf("O dia de ródizo do seu carro é das 23h da Sexta-feira às 5h de Sábado\n");
			break;
	}
	return 0;
}
