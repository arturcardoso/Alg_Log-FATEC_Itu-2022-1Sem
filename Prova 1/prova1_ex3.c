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
	
	printf ("     ===Classifica��o de um valor===\n");
	printf ("\nDigite um n�mero: ");
	scanf ("%f", &valor);
	
	//Um Bonus pra ficar mais bonito
	printf ("\n-Tabela de Classefica��o-\n");
	printf( "\nTipo A: Se o valor digitado for menor do que 10.");
	printf ("\nTipo B: Se o valor digitado for maior ou igual a 10 e menor do que 300.");
	printf ("\nTipo C: Se o valor digitado for maior ou igual a 300 e menor do que 599.");
	printf ("\nTipo D: Se o valor digitado for maior ou igual a 599.\n");
	
	if (valor < 10)
	{
		printf ("\nEsse n�mero: %.2f, � Tipo A", valor);
	}
	else if (valor>=10 && valor<300)
	{
		printf ("\nEsse n�mero: %.2f, � Tipo B", valor);
	}
	else if (valor>=300 && valor<599)
	{
		printf ("\nEsse n�mero: %.2f, � Tipo C", valor);
	}
	else
	{
		printf ("\nEsse n�mero: %.2f, � Tipo D", valor);
	}
	
	return 0;
}
