/*
	1. Receber um n�mero e informar se ele � negativo ou n�o � negativo. 
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	float number;
	
	printf ("Digite um n�mero: ");
	scanf ("%f", &number);

	if (number < 0){
	printf ("Esse n�mero � Negativo");}
	
	else {
	printf("Esse n�mero � Positivo");}
	
	return 0;
}
