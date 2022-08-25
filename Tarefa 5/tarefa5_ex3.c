/*
	3. Receber numerador e denominador. 
    Calcular e mostrar o resultado da divisão, desde que possível (denominador diferente de zero).
    Se não for possível dividir, apenas escreva “não existe divisão por zero”. 
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
	printf("O resultado é: %d", result);
	printf("\n");
	printf("O resto é: %d", rest);}
	
	else {
	printf("Não existe divisão por zero");}
	
	return 0;
}
