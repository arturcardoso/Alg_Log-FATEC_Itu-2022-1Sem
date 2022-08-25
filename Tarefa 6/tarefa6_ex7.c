/*
	7. Um tri�ngulo pode ser classificado de acordo com as medidas de seus lados: 

	- Um tri�ngulo equil�tero possui todos os lados de mesma medida. 
	- Um tri�ngulo is�sceles possui dois lados de mesma medida. 
	- Um tri�ngulo escaleno possui as medidas dos tr�s lados diferentes. 

	Receber os tr�s lados de um tri�ngulo em qualquer ordem (chame de lado1, lado2 e lado3) 
	e classific�-lo em equil�tero, is�sceles ou escaleno.
*/

#include <stdio.h>  
#include <locale.h>   

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int lado1, lado2, lado3;
	
	printf ("===Classifica��o dos Tri�ngulos===\n");
	printf ("\nUm Tri�ngulo Equil�tero possui todos os lados de mesma medida.");
	printf ("\nUm Tri�ngulo Is�sceles possui dois lados de mesma medida.");
	printf ("\nUm Tri�ngulo Escaleno possui as medidas dos tr�s lados diferentes.\n");
	
	printf ("\nInsira a medida do 1� lado: ");
	scanf ("%i", &lado1);
	printf ("Insira a medida do 2� lado: ");
	scanf ("%i", &lado2);
	printf ("Insira a medida do 3� lado: ");
	scanf ("%i", &lado3);
	
	if (lado1==lado2 &&  lado2== lado3)
	{
		printf ("\nEsse Tri�ngulo � Equil�tero");
	}
	else if (lado1==lado2 || lado2==lado3|| lado1==lado3)
	{
		printf("\nEsse Tri�ngulo � Is�sceles");
	} else
	{
		printf("\nEsse Tri�ngulo � Escaleno");
	}
	
	return 0;
}
	
