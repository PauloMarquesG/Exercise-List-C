/*
Author: Paulo Marques Gonçalves;
Exercise: Crie o arquivo boolean.h com as definições necessárias para compor expressões lógicas produzindo na saída um valor booleano;
*/
#include <stdio.h>
#include "boolean.h"
int main() {
	
  printf("%s \n", bool(not false));
  printf("%s \n", bool(false and true));
  printf("%s \n", bool(true or false));
  return 0;
}
