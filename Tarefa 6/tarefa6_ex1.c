/* 
	1. Receber um n�mero e informar se ele � positivo, negativo ou nulo.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

    int num;

	printf("Digite um n�mero inteiro: ");
	scanf("%d",&num);

	if (num < 0)
	{
		printf("O n�mero � negativo");
	}
	else if (num > 0)
	{
		printf("O n�mero � positivo");
	}
	else
	{
		printf("O n�mero � nulo");
	}

	return 0;
}




