/*
Author: Paulo Marques Gon�alves;
Exercise: Dado o seguinte programa, codifique as rotinas
			obtem() -> obtem as temperaturas de cada dia da semana
			media() -> calcula a m�dia da temperatura da semana
			conta() -> quantos dias estao acima da m�dia
*/
#include<stdio.h>
#include<locale.h>

#define max 7

// Fun��o obtem as temperaturas de cada dia da semana
float* obtem (float temp[], int totalDias){
	int x;
	for (x=0;x<totalDias;x++){
		printf("Digite a temperatura do %d� dia:\n",(x+1));
		scanf("%f",&temp[x]);
	}
	system("cls");
	return temp;
}

// Fun��o calcula a m�dia da temperatura da semana
float media (float temp[], int totalDias){
	int x;
	float total;
	for (x=0;x<totalDias;x++){
		total += temp[x];
	}
	return total/totalDias;
}

// Fun��o quantos dias estao acima da m�dia
int conta (float temp[], int totalDias, float media){
	int x, contaMedia=0;
	for (x=0;x<totalDias;x++){
		if (temp[x]>media)contaMedia++;
	}
	return contaMedia;
}

int main() {
setlocale(LC_ALL,"Portuguese");
	float temp[max], m;
	int x;
	
	obtem(temp, max);
	m = media(temp, max);
	
	printf("  :Estat�sticas:\n Dias  |  Temperaturas\n");
	for (x=0;x<7;x++){
		printf("  %d�   |      %.2f\n", x+1, temp[x]);
	}
	printf("\nM�dia de temperatura nos 7 dias: %.2f",m);
	printf("\nTotal de dias com a temperatura maior que a m�dia: %d", conta(temp, max, m) );

return 0;
}
