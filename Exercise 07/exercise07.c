/*
Author: Paulo Marques Gon�alves;
Exercise: Dados os d�gitos da placa de um carro, informe o dia do seu rod�zio.
			Lembrando que o operador % (resto da divis�o inteira) pode nos auxiliar a selecionar o ultimo d�gito de um n�mero inteiro;
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
			printf("O dia de r�dizo do seu carro � das 23h da Segunda-feira �s 5h de Ter�a-feira\n");
			break;
		case 2:
			printf("O dia de r�dizo do seu carro � das 23h da Segunda-feira �s 5h de Ter�a-feira\n");
			break;
		case 3:
			printf("O dia de r�dizo do seu carro � das 23h da Ter�a-feira �s 5h de Quarta-feira\n");
			break;
		case 4:
			printf("O dia de r�dizo do seu carro � das 23h da Ter�a-feira �s 5h de Quarta-feira\n");
			break;
		case 5:
			printf("O dia de r�dizo do seu carro � das 23h da Quarta-feira �s 5h de Quinta-feira\n");
			break;
		case 6:
			printf("O dia de r�dizo do seu carro � das 23h da Quarta-feira �s 5h de Quinta-feira\n");
			break;
		case 7:
			printf("O dia de r�dizo do seu carro � das 23h da Quinta-feira �s 5h de Sexta-feira\n");
			break;
		case 8:
			printf("O dia de r�dizo do seu carro � das 23h da Quinta-feira �s 5h de Sexta-feira\n");
			break;
		case 9:
			printf("O dia de r�dizo do seu carro � das 23h da Sexta-feira �s 5h de S�bado\n");
			break;
		case 0:
			printf("O dia de r�dizo do seu carro � das 23h da Sexta-feira �s 5h de S�bado\n");
			break;
	}
	return 0;
}
