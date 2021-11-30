/*
Author: Paulo Marques Gonçalves;
Exercise: Represente graficamente (desenhe) os vetores abaixo (com suas posições indexadas e elementos armazenados);
			a)int X[4];
			b)char Y[7] = {'x', 'y', 'z', 'w’};
			c)float Z[] = {1.6, 1.72, 1.83, 1.67, 1.8};
*/
#include<stdio.h>
int main(){
int x[4] = {}; // O uso do {} serve para limpar "sujeira" no vetor
char y[7]= {'x', 'y', 'z', 'w'};
float z[] = {1.6, 1.72, 1.83, 1.67, 1.8};
int j;
	
	printf("| ");
	for(j=0;j<4;j++){
		printf("%d | ",x[j]);
	}
	printf("\n\n| ");
	for(j=0;j<7;j++){
		printf("%c | ",y[j]);
	}
	printf("\n\n| ");
	for(j=0;j<5;j++){
		printf("%.2f | ",z[j]);
	}
return 0;
}
