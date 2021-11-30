/*
Author: Paulo Marques Gonçalves;
Exercise: Elabore uma função recursiva que calcule potência de a elevado a b usando multiplicação, sendo a um double e b um inteiro maior ou igual a zero (unsigned);
*/
#include<stdio.h>

double pot(double a,unsigned int b){
	if (b==0){return 1;}
	return (a*pot(a,b-1));
}

int main() {

  double a;
  unsigned int b;

  printf("Digite a e b:\n");
  scanf("%lf %u", &a, &b);
  printf("\n%.2lf elevado a %u: %.2lf", a, b, pot(a,b));

  return 0;
}
