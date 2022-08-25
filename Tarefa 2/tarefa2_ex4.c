/*
	4. Na Dinamarca todo cidadão tem acesso à educação e saúde de 
	qualidade através do pagamento de um imposto único sobre o salário, de 37%. 
	Receber o salário bruto (valor do salário sem descontos) de um trabalhador 
	dinamarquês e calcular o salário líquido (valor do salário após os descontos).
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
	float salary, tax, net_salary;
	
	printf ("Digite o salário: ");
	scanf ("%f", &salary);
	
	printf ("--------------------------------------\n");

	net_salary = salary - (salary*0.37);
	tax = salary*0.37;
	
	printf("\nO salário bruto é de: %.2f kr\n", salary);
	printf ("\nO imposto aplicado ao salário foi de: %.2f kr\n", tax);
	printf("\nO salário líquido é de: %.2f kr", net_salary); //kr é o simbolo da moeda dinamarquesa (dansk krone)
  
	return 0;
}
