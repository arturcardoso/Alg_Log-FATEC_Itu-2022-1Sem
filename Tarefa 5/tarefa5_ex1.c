/*
	1. Receber um número e informar se ele é negativo ou não é negativo. 
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	float number;
	
	printf ("Digite um número: ");
	scanf ("%f", &number);

	if (number < 0){
	printf ("Esse número é Negativo");}
	
	else {
	printf("Esse número é Positivo");}
	
	return 0;
}
