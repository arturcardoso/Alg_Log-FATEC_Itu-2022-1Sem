/*
	8. Voc� assina um plano de 50 minutos no celular que custa R$ 50.00 por m�s, independente de utiliz�-los integralmente ou n�o. 
    Por�m, se voc� utilizar mais do que 50 minutos, � cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. 
    Receber quantos minutos foram gastos no m�s e calcular o valor da conta. 
*/
#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale (LC_ALL, "Portuguese");
	
	int min;
	float payment;
	
	printf("Digite quantos minutos foram gastos: ");
	scanf("%d", &min);
	
	if (min<=50){
	printf ("Sua conta vai ser de R$50,00");
	}
	else{
	payment = 50 + ((min - 50)* 1.50);
	printf ("Sua conta vai ser R$%.2f", payment);
	}
	
	return 0;
}
