//1. Calcular o perímetro de uma circunferência recebendo seu raio. C = 2 * pi* r (utilizar  = 3.14).

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
	float radius, perimeter;
	
	printf("Digite o raio da circunferência: ");
	scanf("%f", &radius);

	perimeter = 2*3.14*radius;
	
	printf("\nO perímetro da circunferência é: %.2f", perimeter);
  
	return 0;
}
