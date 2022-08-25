/* 
	Faça um programa que receba a quantidade de horas trabalhadas e o valor da hora trabalhada de um funcionário.
	Calcular e mostrar o salário base (horas trabalhada * valor hora).
	
	Se o funcionário tiver um salário base menor que R$ 1500,00, dar uma bonificação de 15%, 
	caso contrário dar uma bonificação de 5%.
	
	Mostrar o salário base, bonificação e o salário final.

	O salário final é igual ao salário base mais o valor da bonificação.

	----Exemplo----:
	
	Horas trabalhadas =  80
	Valor hora = 10

	Salário base              =  R$ 800,00
	Bonificação de 15% =  R$ 120,00
	Salário final              =  R$ 920,00
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
		
		printf("\nBonificação de 15%% = R$ %.2f", bonus_salary);
		printf("\nSalario final = R$ %.2f", final_salary);
	} 
	else //(base_salary >= 1500)
	{
		bonus_salary = base_salary * 0.05;
		final_salary = base_salary + bonus_salary;
		
		printf("\nBonificação de 5%% = R$ %.2f", bonus_salary);
		printf("\nSalario final = R$ %.2f", final_salary);
	}
	
	return 0;
}
