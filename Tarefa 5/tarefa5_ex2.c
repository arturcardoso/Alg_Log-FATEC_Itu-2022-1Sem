/*
	2. Receber um n�mero e verificar se ele esta na faixa de 0 � 9. 
    Se sim, mostre uma mensagem afirmativa, caso contr�rio mostre 
	uma mensagem indicando que o n�mero n�o se encontra na faixa. 
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	float number;
	
	printf ("Digite um n�mero: ");
	scanf ("%f", &number);

	if (number >= 0 && number <= 9){
	printf ("Esse n�mero est� na faixa de 0 � 9");}
	
	else {
	printf("Esse n�mero n�o est� na faixa de 0 � 9");}
	
	return 0;
}
