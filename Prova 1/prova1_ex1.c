/*
	1-Faça uma aplicação que receba um valor inteiro e mostre na tela os 4 primeiros múltiplos desse valor (2 pontos). 
    Exemplo: se o usuário digitar 5, mostrar: 10, 15, 20 e 25.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int valor;
	
	printf ("Digite um número inteiro: ");
	scanf("%i", &valor);
	
	printf ("\n%i, %i, %i, %i", valor*2, valor*3, valor*4, valor*5);
	
	return 0;
}
