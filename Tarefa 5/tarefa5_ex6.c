/*
	6. Receber dois n�meros e os apresente em ordem crescente. 
    Utilize apenas a estrutura de decis�o if, ou seja, sem o opcional else. 
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite o 1� n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite o 2� n�mero: ");
	scanf("%d", &n2);
	
	if (n1>=n2){
	printf ("A ordem crescente � %d e %d", n2,n1);
	}
	if (n2>=n1){
	printf ("A ordem crescente � %d e %d", n1,n2);
	}
	
	return 0;
}
