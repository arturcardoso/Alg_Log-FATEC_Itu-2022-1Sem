/* 
	1. Receber um número e informar se ele é positivo, negativo ou nulo.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

    int num;

	printf("Digite um número inteiro: ");
	scanf("%d",&num);

	if (num < 0)
	{
		printf("O número é negativo");
	}
	else if (num > 0)
	{
		printf("O número é positivo");
	}
	else
	{
		printf("O número é nulo");
	}

	return 0;
}




