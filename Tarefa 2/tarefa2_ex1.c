//1. Calcular o per�metro de uma circunfer�ncia recebendo seu raio. C = 2 * pi* r (utilizar  = 3.14).

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
	float radius, perimeter;
	
	printf("Digite o raio da circunfer�ncia: ");
	scanf("%f", &radius);

	perimeter = 2*3.14*radius;
	
	printf("\nO per�metro da circunfer�ncia �: %.2f", perimeter);
  
	return 0;
}
