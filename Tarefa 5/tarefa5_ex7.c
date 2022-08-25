/*
	7. Implemente um programa que calcule aumento de salário no ano corrente. 
    Se o salário for de até R$ 1000.00 deve ser calculado o novo salário com aumento de 5%,
	para um salário maior que R$ 1000.00 o aumento é de 7%. 
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	int salary, plus, final;
	
	printf("Digite o salário: R$");
	scanf("%d", &salary);
	
	if (salary<=1000){
	final = salary + (salary * 0.05);
	plus = salary * 0.05;
	printf ("Com o aumento de R$%.2d (que é 5%% do seu salário),\nO novo salário é de R$%.2d", plus, final);
	}
	if (salary>1000){
	final = salary + (salary * 0.07);
	plus = salary * 0.07;
	printf ("Com o aumento de R$%.2d (que é 7%% do seu salário),\nO novo salário é de R$%.2d", plus, final);
	}
	
	return 0;
}
