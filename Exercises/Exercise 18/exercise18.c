/*
Author: Paulo Marques Gon�alves;
Exercise: Codifique a fun��o rodizio(placa), que recebe um n�mero de 4 d�gitos representando a placa de um ve�culo e exibe o dia em ele est� no rod�zio;
*/
#include<stdio.h>
#include<locale.h>

void rodizio (int placa){
	switch (placa%10){
		case 1:
		case 2:
			printf("O dia de r�dizo do seu carro � das 23h da Segunda-feira �s 5h de Ter�a-feira\n");
			break;
		case 3:
		case 4:
			printf("O dia de r�dizo do seu carro � das 23h da Ter�a-feira �s 5h de Quarta-feira\n");
			break;
		case 5:
		case 6:
			printf("O dia de r�dizo do seu carro � das 23h da Quarta-feira �s 5h de Quinta-feira\n");
			break;
		case 7:
		case 8:
			printf("O dia de r�dizo do seu carro � das 23h da Quinta-feira �s 5h de Sexta-feira\n");
			break;
		case 9:
		case 0:
			printf("O dia de r�dizo do seu carro � das 23h da Sexta-feira �s 5h de S�bado\n");
			break;
	}
}

int main (){
   		setlocale(LC_ALL,"Portuguese");
	int placa;
	printf("Digite os quatro (4) digitos da placa do seu ve�culo para saber qual o seu dia de rod�zio:\n");
	scanf("%d", &placa);
	rodizio(placa);
	return 0;
}
