/*
	4. Na Dinamarca todo cidad�o tem acesso � educa��o e sa�de de 
	qualidade atrav�s do pagamento de um imposto �nico sobre o sal�rio, de 37%. 
	Receber o sal�rio bruto (valor do sal�rio sem descontos) de um trabalhador 
	dinamarqu�s e calcular o sal�rio l�quido (valor do sal�rio ap�s os descontos).
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
	float salary, tax, net_salary;
	
	printf ("Digite o sal�rio: ");
	scanf ("%f", &salary);
	
	printf ("--------------------------------------\n");

	net_salary = salary - (salary*0.37);
	tax = salary*0.37;
	
	printf("\nO sal�rio bruto � de: %.2f kr\n", salary);
	printf ("\nO imposto aplicado ao sal�rio foi de: %.2f kr\n", tax);
	printf("\nO sal�rio l�quido � de: %.2f kr", net_salary); //kr � o simbolo da moeda dinamarquesa (dansk krone)
  
	return 0;
}
