/*
Author: Paulo Marques Gon�alves;
Exercise: Defina um tipo de estrutura nomeada para representar pontos no plano atrav�s de suas coordenadas cartesianas (x, y).
			Em seguida, crie uma fun��o para calcular a dist�ncia entre dois pontos e codifique um programa para testar seu funcionamento.
dispts.h
*/
#include<math.h>
typedef struct{
	double x;
	double y;
}Pontos;

void leCoordenadas(Pontos cod[], int n){
	int z;
	for(z=0;z<n;z++){
		printf("%d� ponto cartesiano\n",z+1);
		printf("Valor de X: ");
		scanf("%lf",&cod[z].x);
		printf("Valor de Y: ");
		scanf("%lf",&cod[z].y);
		printf("\n");
	}
}

void calculaDistancia(Pontos cod[]){
	double PQ;
	system("cls");
	printf("<< Calculo de dist�ncia dos dois pontos cartesianos >>\n");
	printf("Coordenadas: (%.1lf;%.1lf) e (%.1lf;%.1lf)",cod[0].x ,cod[0].y ,cod[1].x ,cod[1].y);
	PQ = sqrt((pow((cod[0].x-cod[1].x),2)+pow((cod[0].y-cod[1].y),2)));
	printf("\nA dist�ncia � %.2lf",PQ);
}
