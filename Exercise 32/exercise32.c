/*
Author: Paulo Marques Gonçalves;
Exercise: Defina a estrutura PESSOA com:
		  * Nome
		  * Telefone
		  * Data de nascimento
		Antes, não esqueça de definir a estrutura DATA. Implemente um programa que solicite os dados do seu melhor amigo; armazene numa variável do tipo PESSOA.
		Em seguida imprima os dados desta variável na tela;
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
