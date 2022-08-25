//2. Receber base e altura de um triângulo e calcular sua área.

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
     
	float base, alt, area;
	
	printf("Digite a base do triângulo: ");
	scanf("%f", &base);
	
	printf ("Digite a altura do triângulo: ");
	scanf("%f", &alt);

	area = (base * alt)/2;
	
	printf("\nA área do triangulo é de : %.2f metros", area); // Coloquei metros só de exemplo
  
	return 0;	
}
