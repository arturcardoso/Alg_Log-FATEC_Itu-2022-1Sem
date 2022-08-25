/*
	5. A velocidade média de um veículo em um percurso 
	é dada através da distância percorrida pelo tempo, ou seja, Vm = DS / Dt. 
	Calcular a velocidade média do veículo em uma estrada recebendo esses dois dados do percurso.
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
     
    //Obs: eu usei a distãncia em Km e o tempo em Horas.
    
	float km, hours, vm;
	
	printf("Digite a distância percorrida em Quilómetros: ");
	scanf("%f", &km);
	
	printf("Digite o tempo em horas: ");
	scanf("%f", &hours);

	vm = km / hours;
	
	printf("\nA velocidade média é de: %.2f Km/h", vm);
  
	return 0;
}
