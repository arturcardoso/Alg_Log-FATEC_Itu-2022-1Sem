//3. Receber um comprimento em metros e convertê-lo para centímetros.

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
     
	float cm, mtr;
	
	printf("Digite o comprimento em metros: ");
	scanf("%f", &mtr);

	cm = mtr * 100;
	
	printf("\nEsse valor em centímetros é : %.2f", cm);
  
	return 0;
}
