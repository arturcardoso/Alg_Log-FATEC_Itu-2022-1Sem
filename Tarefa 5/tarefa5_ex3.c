/*
	3. Receber numerador e denominador. 
    Calcular e mostrar o resultado da divis�o, desde que poss�vel (denominador diferente de zero).
    Se n�o for poss�vel dividir, apenas escreva �n�o existe divis�o por zero�. 
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	int num, den, result, rest;
	
	printf ("Digite um numerador: ");
	scanf ("%d", &num);
	
	printf ("Digite um denominador: ");
	scanf ("%d", &den);

	if (den > 0 || den < 0){
	result = num / den;
	rest = num % 2;
	printf("O resultado �: %d", result);
	printf("\n");
	printf("O resto �: %d", rest);}
	
	else {
	printf("N�o existe divis�o por zero");}
	
	return 0;
}
