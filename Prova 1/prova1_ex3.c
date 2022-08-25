/*
	3-Receber um valor float e classificar o mesmo conforme os tipos abaixo (4 pontos):

	Tipo A: Se o valor digitado for menor do que 10.
	Tipo B: Se o valor digitado for maior ou igual a 10 e menor do que 300.
	Tipo C: Se o valor digitado for maior ou igual a 300 e menor do que 599.
	Tipo D: Se o valor digitado for maior ou igual a 599.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	float valor;
	
	printf ("     ===Classificação de um valor===\n");
	printf ("\nDigite um número: ");
	scanf ("%f", &valor);
	
	//Um Bonus pra ficar mais bonito
	printf ("\n-Tabela de Classeficação-\n");
	printf( "\nTipo A: Se o valor digitado for menor do que 10.");
	printf ("\nTipo B: Se o valor digitado for maior ou igual a 10 e menor do que 300.");
	printf ("\nTipo C: Se o valor digitado for maior ou igual a 300 e menor do que 599.");
	printf ("\nTipo D: Se o valor digitado for maior ou igual a 599.\n");
	
	if (valor < 10)
	{
		printf ("\nEsse número: %.2f, é Tipo A", valor);
	}
	else if (valor>=10 && valor<300)
	{
		printf ("\nEsse número: %.2f, é Tipo B", valor);
	}
	else if (valor>=300 && valor<599)
	{
		printf ("\nEsse número: %.2f, é Tipo C", valor);
	}
	else
	{
		printf ("\nEsse número: %.2f, é Tipo D", valor);
	}
	
	return 0;
}
