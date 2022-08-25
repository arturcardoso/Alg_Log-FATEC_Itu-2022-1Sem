/*
	2-Faça uma aplicação que receba o 3 valores int. Mostre na tela se os valores recebidos são (4 pontos):  
	
    -Iguais (se todos os valores recebidos forem iguais), 
    -Parcialmente iguais (se somente dois valores entre os três forem iguais)
    -Diferentes (se todos os valores forem diferentes).  

    Exemplo: Se o usuário digitar: 3, 4 e 3, imprimir: Parcialmente iguais.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf ("Digite um número inteiro: ");
	scanf("%i", &n1);
	
	printf ("Digite um número inteiro: ");
	scanf("%i", &n2);
	
	printf ("Digite um número inteiro: ");
	scanf("%i", &n3);
	
	if (n1 == n2 && n1 == n3 ) //Iguais
	{
		printf ("\nOs valores são Iguais");
	}
	else if (n1==n2 || n2==n3 || n1==n3) //Pàrcialmente Iguais
	{
		printf ("\nOs valores são parcialmente iguais");
	}
	else
	{
		printf ("\nOs valores são diferentes"); //Diferentes
	}
	
	return 0;
}
