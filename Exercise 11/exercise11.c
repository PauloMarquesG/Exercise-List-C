/*
Author: Paulo Marques Gonçalves;
Exercise: Dada uma sequência de números inteiros diferentes de zero, terminada por um zero, imprima o quadrado de cada número da sequência;
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h.>
int main (){
setlocale(LC_ALL,"Portuguese");
	float num;
	do{
		printf("Digite um valor para calcular o quadrado:\n");
		scanf("%f",&num);
		if(num==0){
			break;
		}else{
			printf("O quadrado de %.2f é %.2f\n\n",num,pow(num,2));
			system("pause");
			system("cls");
		}
	}while(num!=0);
	return 0;
}
