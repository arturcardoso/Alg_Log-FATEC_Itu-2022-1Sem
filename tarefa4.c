/* 
	Fa�a um programa que receba a quantidade de horas trabalhadas e o valor da hora trabalhada de um funcion�rio.
	Calcular e mostrar o sal�rio base (horas trabalhada * valor hora).
	
	Se o funcion�rio tiver um sal�rio base menor que R$ 1500,00, dar uma bonifica��o de 15%, 
	caso contr�rio dar uma bonifica��o de 5%.
	
	Mostrar o sal�rio base, bonifica��o e o sal�rio final.

	O sal�rio final � igual ao sal�rio base mais o valor da bonifica��o.

	----Exemplo----:
	
	Horas trabalhadas =  80
	Valor hora = 10

	Sal�rio base              =  R$ 800,00
	Bonifica��o de 15% =  R$ 120,00
	Sal�rio final              =  R$ 920,00
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int worked_hours;
	float hour_value, base_salary, bonus_salary, final_salary;
	
	printf("Horas trabalhadas: ");
	scanf("%i", &worked_hours);

	printf("Valor da hora: ");
	scanf("%f", &hour_value);
	
	base_salary = worked_hours * hour_value;
	
	printf("\nSalario base = R$ %.2f", base_salary);
	
	if (base_salary < 1500)
	{
		bonus_salary = base_salary * 0.15;
		final_salary = base_salary + bonus_salary;
		
		printf("\nBonifica��o de 15%% = R$ %.2f", bonus_salary);
		printf("\nSalario final = R$ %.2f", final_salary);
	} 
	else //(base_salary >= 1500)
	{
		bonus_salary = base_salary * 0.05;
		final_salary = base_salary + bonus_salary;
		
		printf("\nBonifica��o de 5%% = R$ %.2f", bonus_salary);
		printf("\nSalario final = R$ %.2f", final_salary);
	}
	
	return 0;
}
