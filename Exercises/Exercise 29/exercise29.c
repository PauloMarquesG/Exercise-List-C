/*
Author: Paulo Marques Gon�alves;
Exercise: Codifique a fun��o strpos(s, c) que devolve a posi��o da primeira ocorr�ncia do caracter c na string s; ou -1, caso c n�o exista em s;
*/
#include<stdio.h>
#include<string.h>
#include<locale.h>

int strpos(char texto[], char letra){
	int tamanho,x;
	tamanho = strlen(texto);
	for(x=0;x<=tamanho;x++){
		if(texto[x]==letra)return x;
	}
	return -1;
}

int main (){
setlocale(LC_ALL,"Portuguese");
	char s[50], c;
		printf("Programa sens�vel a letras em CapsLock\n");
        puts("Digite uma frase: ");
        gets (s);
        printf("\nDigite o caracter que procura:\n");
        scanf("%c",&c);
        int x = strpos(s,c);
        if(x>=0){
        	printf("\nA posi��o do caracter '%c' na frase '%s' �: %d",c,s,x);	
		}else{
			printf("\nA posi��o do caracter '%c' n�o existe na frase '%s'\nErro: %d",c,s,x);
		}
        
    return 0;
}
