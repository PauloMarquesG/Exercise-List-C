/*
Author: Paulo Marques Gonçalves;
Exercise: Codifique a função fat(n), que devolve o fatorial de um inteiro n. Lembrando que:
  			n! = n * (n-1) * (n-2) * ... * 2 * 1
  			0! = 1 (por definição)
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
	printf("O fatorial de %d! é %d",n ,resultado);

	return 0;
}
