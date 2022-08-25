/*
	2. Receber um intervalo (dois valores) e em seguida um número. Informar se o número está 
	dentro, fora ou nas extremidades do intervalo. Por exemplo, em um intervalo de 1 a 3, 0 está 
	fora, 2 está dentro e 1 está em uma extremidade do intervalo.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
    int valor1, valor2, num;
	
	printf("Digite o 1º valor do intervalo: ");
	scanf("%i", &valor1);
	
	printf("\nDigite o 2º valor do intervalo \n(O valor deve ser maior que o 1º valor): ");
	scanf("%i", &valor2);

	printf("\nAgora digite um número: ");
	scanf("%i", &num);
	
	if (num < valor1 || num > valor2)
	{
		printf("O número está FORA do intervalo");
	}
	else if (num == valor1 || num == valor2)
	{
		printf("O número está na Extremidade do intervalo");
	}
	else
	{
		printf("O número está DENTRO do intervalo");
	}

	return 0;
}
