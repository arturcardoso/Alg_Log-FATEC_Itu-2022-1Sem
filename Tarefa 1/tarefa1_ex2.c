//2. Receber base e altura de um tri�ngulo e calcular sua �rea.

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
     
	float base, alt, area;
	
	printf("Digite a base do tri�ngulo: ");
	scanf("%f", &base);
	
	printf ("Digite a altura do tri�ngulo: ");
	scanf("%f", &alt);

	area = (base * alt)/2;
	
	printf("\nA �rea do triangulo � de : %.2f metros", area); // Coloquei metros s� de exemplo
  
	return 0;	
}
