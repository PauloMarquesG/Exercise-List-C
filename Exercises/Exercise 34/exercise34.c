/*
Author: Paulo Marques Gonçalves;
Exercise: Defina um tipo de estrutura nomeada para representar pontos no plano através de suas coordenadas cartesianas (x, y).
			Em seguida, crie uma função para calcular a distância entre dois pontos e codifique um programa para testar seu funcionamento.
*/
#include<stdio.h>
#include"dispts.h"
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
	Pontos coordenadas[2];
	leCoordenadas(coordenadas,2);
	calculaDistancia(coordenadas);
	return 0;
}
