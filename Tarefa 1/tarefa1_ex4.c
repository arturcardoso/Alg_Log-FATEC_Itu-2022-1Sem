/*
	4. Receber uma temperatura em Fahrenheits e convertê-la para Celsius.
	Celsius = (Fahrenheit - 32) / 1,8.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
     
	float C, F;
	
	printf("Digite a temperatuta em Fahrenheits: ");
	scanf("%f", &F);

	C = (F - 32) / 1.8;
	
	printf("\nEssa temperatura em Celsius é : %.2f °C", C);
  
	return 0;
}
