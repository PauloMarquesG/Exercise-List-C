/*
Author: Paulo Marques Gon�alves;
Exercise: Codifique uma fun��o recursiva que recebe um natural n e imprime seus d�gitos invertidos (da direita para a esquerda);
*/
#include<stdio.h>
#include<locale.h>

void invertido(int valor){
	int resultado=valor%10;
	if(resultado<10)printf("%d", resultado);
	if(valor>=10)invertido(valor/10);
}

int main (){
setlocale(LC_ALL,"Portuguese");

	int valor;
	
	do{
		printf("Digite um n�mero natural:\n");
		scanf("%d", &valor);
	}while(valor<0);
	printf("O valor invertido (direita para esquerda) �:: ");
	invertido(valor);

	return 0;
}
