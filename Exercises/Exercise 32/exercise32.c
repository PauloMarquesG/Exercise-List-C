/*
Author: Paulo Marques Gon�alves;
Exercise: Defina a estrutura PESSOA com:
		  * Nome
		  * Telefone
		  * Data de nascimento
		Antes, n�o esque�a de definir a estrutura DATA. Implemente um programa que solicite os dados do seu melhor amigo; armazene numa vari�vel do tipo PESSOA.
		Em seguida imprima os dados desta vari�vel na tela;
*/
#include<stdio.h>
#include"agenda.h"
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
	Pessoa agenda[5];
	LeAgenda(agenda,5);
	ImprimeAgenda(agenda,5);
	return 0;
}
