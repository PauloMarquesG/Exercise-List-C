/*
Author: Paulo Marques Gonçalves;
Exercise: Dado o seguinte programa, codifique as rotinas
			obtem() -> obtem as temperaturas de cada dia da semana
			media() -> calcula a média da temperatura da semana
			conta() -> quantos dias estao acima da média
*/
#include<stdio.h>
#include<locale.h>

#define max 7

// Função obtem as temperaturas de cada dia da semana
float* obtem (float temp[], int totalDias){
	int x;
	for (x=0;x<totalDias;x++){
		printf("Digite a temperatura do %dº dia:\n",(x+1));
		scanf("%f",&temp[x]);
	}
	system("cls");
	return temp;
}

// Função calcula a média da temperatura da semana
float media (float temp[], int totalDias){
	int x;
	float total;
	for (x=0;x<totalDias;x++){
		total += temp[x];
	}
	return total/totalDias;
}

// Função quantos dias estao acima da média
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
	
	printf("  :Estatísticas:\n Dias  |  Temperaturas\n");
	for (x=0;x<7;x++){
		printf("  %dº   |      %.2f\n", x+1, temp[x]);
	}
	printf("\nMédia de temperatura nos 7 dias: %.2f",m);
	printf("\nTotal de dias com a temperatura maior que a média: %d", conta(temp, max, m) );

return 0;
}
