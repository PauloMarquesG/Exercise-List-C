/*
Author: Paulo Marques Gonçalves;
Exercise: Defina as seguintes macros:
			soma(x, y); // devolve a soma de x com y
			max(x, y); // devolve o maior entre x e y
			abs(n); // devolve o valor absoluto de n
*/
#include<stdio.h>
#include"macros.h"
int main(){
    int n1 = -7;
    int n2 =  8;
    printf("\n %d ", soma(2*3, 1+3) );
    printf("\n %d ", abs(n1) );
    printf("\n %d ", max(n1, n2));
    return 0; 
}
