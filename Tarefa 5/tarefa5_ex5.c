/*
	5. Receber dois n�meros e mostrar o maior deles. 
*/
#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	float num1, num2;
	
	printf("Digite o 1� n�mero: ");
	scanf("%f", &num1);
	
	printf("Digite o 2� n�mero: ");
	scanf("%f", &num2);
	 
	if (num1 == num2){
	printf("Ambos s�o Iguais");
	}
	else if (num1 > num2){
	printf("\nO maior � %.1f", num1);
	}
	else {
	printf("\nO maior � %.1f", num2);
	}
	
	return 0;
}
