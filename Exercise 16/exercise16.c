/*
Author: Paulo Marques Gon�alves;
Exercise: Crie o arquivo boolean.h com as defini��es necess�rias para compor express�es l�gicas produzindo na sa�da um valor booleano;
*/
#include <stdio.h>
#include "boolean.h"
int main() {
	
  printf("%s \n", bool(not false));
  printf("%s \n", bool(false and true));
  printf("%s \n", bool(true or false));
  return 0;
}
