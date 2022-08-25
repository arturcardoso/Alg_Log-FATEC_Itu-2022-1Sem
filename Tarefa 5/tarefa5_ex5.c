/*
	5. Receber dois números e mostrar o maior deles. 
*/
#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	float num1, num2;
	
	printf("Digite o 1º número: ");
	scanf("%f", &num1);
	
	printf("Digite o 2º número: ");
	scanf("%f", &num2);
	 
	if (num1 == num2){
	printf("Ambos são Iguais");
	}
	else if (num1 > num2){
	printf("\nO maior é %.1f", num1);
	}
	else {
	printf("\nO maior é %.1f", num2);
	}
	
	return 0;
}
