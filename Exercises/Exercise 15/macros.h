/*
Author: Paulo Marques Gonçalves;
Exercise: Defina as seguintes macros:
			soma(x, y); // devolve a soma de x com y
			max(x, y); // devolve o maior entre x e y
			abs(n); // devolve o valor absoluto de n
macros.h			
*/

#define soma(x, y) ((x) + (y))
#define max(x, y) ((x) > (y) ? (x) : (y))
#define abs(n1) ((n1) < 0 ? -(n1) :(n1))
