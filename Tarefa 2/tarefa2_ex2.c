/*
	2. Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. 
	Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no m�s e calcular o sal�rio dele.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
	int normal, extra;
	float salary;
	
	printf ("Digite o total de horas trabalhadas: ");
	scanf ("%i", &normal);
	
	printf ("Digite o total de horas extras: ");
	scanf ("%i", &extra);

	salary = (10*normal) + (15*extra);
	
	printf("\nO sal�rio � de: R$ %.2f\n", salary);
	printf ("\nO sal�rio mensal � de: R$ %.2f", salary*30);
  
	return 0;
}
