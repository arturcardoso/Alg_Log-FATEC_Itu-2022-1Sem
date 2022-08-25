/*
	4. Receber 10 números e, ao final, informar qual é o maior e o menor deles.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int num, maior, menor;
	int i;

	for(i=0; i<10; i++)
	{
		printf("Entre com o %dº numero inteiro: ",i+1);
		scanf("%i", &num);

		if(num > maior)
		maior = num;
		
		else if(num < menor)
		menor = num;
	}
	printf("\n Menor Número: %i", menor);
	printf("\n Maior Número: %i", maior);

	return 0;
} 

