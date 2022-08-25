//1. Receber dois valores e calcular sua média aritmética.

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
     
	float num1, num2, med;
	
	printf("Digite um valor: ");
	scanf("%f", &num1);
	
	printf ("Digite mais um valor: ");
	scanf("%f", &num2);

	med = (num1 + num2)/2;
	
	printf("\nA média é : %.2f", med);
  
	return 0;	
}
