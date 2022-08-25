/*
	9. Receber um ano e se este ano for bissexto exibir na tela �Ano Bissexto�, sen�o exibir na tela �Ano N�o-Bissexto�. 
    Um ano � bissexto se for divis�vel por 4, mas n�o por 100. 
    Um ano tamb�m � bissexto se for divis�vel por 400.
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	int year, rest;
	
	printf("Digite o ano: ");
	scanf("%i", &year);
	
	rest = year % 4;
	
	if (rest > 0){
	printf ("Ano N�o-Bissexto");
	}
	else {
	printf ("Ano Bissexto");
	}
	
	return 0;
}
