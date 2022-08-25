/*
	5. A velocidade m�dia de um ve�culo em um percurso 
	� dada atrav�s da dist�ncia percorrida pelo tempo, ou seja, Vm = DS / Dt. 
	Calcular a velocidade m�dia do ve�culo em uma estrada recebendo esses dois dados do percurso.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
     
    //Obs: eu usei a dist�ncia em Km e o tempo em Horas.
    
	float km, hours, vm;
	
	printf("Digite a dist�ncia percorrida em Quil�metros: ");
	scanf("%f", &km);
	
	printf("Digite o tempo em horas: ");
	scanf("%f", &hours);

	vm = km / hours;
	
	printf("\nA velocidade m�dia � de: %.2f Km/h", vm);
  
	return 0;
}
