/*
	7. Um triângulo pode ser classificado de acordo com as medidas de seus lados: 

	- Um triângulo equilátero possui todos os lados de mesma medida. 
	- Um triângulo isósceles possui dois lados de mesma medida. 
	- Um triângulo escaleno possui as medidas dos três lados diferentes. 

	Receber os três lados de um triângulo em qualquer ordem (chame de lado1, lado2 e lado3) 
	e classificá-lo em equilátero, isósceles ou escaleno.
*/

#include <stdio.h>  
#include <locale.h>   

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int lado1, lado2, lado3;
	
	printf ("===Classificação dos Triângulos===\n");
	printf ("\nUm Triângulo Equilátero possui todos os lados de mesma medida.");
	printf ("\nUm Triângulo Isósceles possui dois lados de mesma medida.");
	printf ("\nUm Triângulo Escaleno possui as medidas dos três lados diferentes.\n");
	
	printf ("\nInsira a medida do 1º lado: ");
	scanf ("%i", &lado1);
	printf ("Insira a medida do 2º lado: ");
	scanf ("%i", &lado2);
	printf ("Insira a medida do 3º lado: ");
	scanf ("%i", &lado3);
	
	if (lado1==lado2 &&  lado2== lado3)
	{
		printf ("\nEsse Triângulo é Equilátero");
	}
	else if (lado1==lado2 || lado2==lado3|| lado1==lado3)
	{
		printf("\nEsse Triângulo é Isósceles");
	} else
	{
		printf("\nEsse Triângulo é Escaleno");
	}
	
	return 0;
}
	
