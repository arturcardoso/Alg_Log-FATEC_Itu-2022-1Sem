/*
	7. Implemente um programa que calcule aumento de sal�rio no ano corrente. 
    Se o sal�rio for de at� R$ 1000.00 deve ser calculado o novo sal�rio com aumento de 5%,
	para um sal�rio maior que R$ 1000.00 o aumento � de 7%. 
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	int salary, plus, final;
	
	printf("Digite o sal�rio: R$");
	scanf("%d", &salary);
	
	if (salary<=1000){
	final = salary + (salary * 0.05);
	plus = salary * 0.05;
	printf ("Com o aumento de R$%.2d (que � 5%% do seu sal�rio),\nO novo sal�rio � de R$%.2d", plus, final);
	}
	if (salary>1000){
	final = salary + (salary * 0.07);
	plus = salary * 0.07;
	printf ("Com o aumento de R$%.2d (que � 7%% do seu sal�rio),\nO novo sal�rio � de R$%.2d", plus, final);
	}
	
	return 0;
}
