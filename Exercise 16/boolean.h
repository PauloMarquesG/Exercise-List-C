/*
Author: Paulo Marques Gonçalves;
Exercise: Crie o arquivo boolean.h com as definições necessárias para compor expressões lógicas produzindo na saída um valor booleano;
boolean.h
*/

#define true 1
#define false 0
#define not !
#define and &&
#define or ||

#define bool(test) (test) ? "true" : "false"

