/*
Author: Paulo Marques Gon�alves;
Exercise: Codifique a fun��o fat(n), que devolve o fatorial de um inteiro n. Lembrando que:
  			n! = n * (n-1) * (n-2) * ... * 2 * 1
  			0! = 1 (por defini��o)
*/
#include<stdio.h>
#include<locale.h>

int fatorial(int n){
	int fat=1;
	if(n==0){
		return fat;
	}else{
		do{
			fat *= n;
			n--;
		}while(n>1);
	}
	return fat;
}

int main (){
setlocale(LC_ALL,"Portuguese");
	int n,resultado;
	do{
		printf("Digite um valor inteiro para ser fatorado!\n");
		scanf("%d", &n);
	}while(n<0);	
	resultado = fatorial(n);
	printf("O fatorial de %d! � %d",n ,resultado);

	return 0;
}
