/*
	5. Receber o ano de nascimento do usuário 
	e dizer aproximadamente quantos dias de vida ele tem.
*/
#include <stdio.h>  
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
	int birth_year, days;
	
	printf("Digite seu ano de nascimento: ");
	scanf("%i", &birth_year);

	days = (2022 - birth_year) * 365;
	
	printf("\nVocê tem aproximadamente: %.i dias", days);
  
	return 0;
}
