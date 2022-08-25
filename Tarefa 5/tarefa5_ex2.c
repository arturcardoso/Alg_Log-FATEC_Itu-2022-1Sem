/*
	2. Receber um número e verificar se ele esta na faixa de 0 à 9. 
    Se sim, mostre uma mensagem afirmativa, caso contrário mostre 
	uma mensagem indicando que o número não se encontra na faixa. 
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	float number;
	
	printf ("Digite um número: ");
	scanf ("%f", &number);

	if (number >= 0 && number <= 9){
	printf ("Esse número está na faixa de 0 à 9");}
	
	else {
	printf("Esse número não está na faixa de 0 à 9");}
	
	return 0;
}
