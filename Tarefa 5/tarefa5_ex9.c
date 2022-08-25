/*
	9. Receber um ano e se este ano for bissexto exibir na tela “Ano Bissexto”, senão exibir na tela “Ano Não-Bissexto”. 
    Um ano é bissexto se for divisível por 4, mas não por 100. 
    Um ano também é bissexto se for divisível por 400.
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
	printf ("Ano Não-Bissexto");
	}
	else {
	printf ("Ano Bissexto");
	}
	
	return 0;
}
