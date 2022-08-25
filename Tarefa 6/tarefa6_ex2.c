/*
	2. Receber um intervalo (dois valores) e em seguida um n�mero. Informar se o n�mero est� 
	dentro, fora ou nas extremidades do intervalo. Por exemplo, em um intervalo de 1 a 3, 0 est� 
	fora, 2 est� dentro e 1 est� em uma extremidade do intervalo.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int valor1, valor2, num;
	
	printf("Digite o 1� valor do intervalo: ");
	scanf("%i", &valor1);
	
	printf("\nDigite o 2� valor do intervalo \n(O valor deve ser maior que o 1� valor): ");
	scanf("%i", &valor2);

	printf("\nAgora digite um n�mero: ");
	scanf("%i", &num);
	
	if (num < valor1 || num > valor2)
	{
		printf("O n�mero est� FORA do intervalo");
	}
	else if (num == valor1 || num == valor2)
	{
		printf("O n�mero est� na Extremidade do intervalo");
	}
	else
	{
		printf("O n�mero est� DENTRO do intervalo");
	}

	return 0;
}
