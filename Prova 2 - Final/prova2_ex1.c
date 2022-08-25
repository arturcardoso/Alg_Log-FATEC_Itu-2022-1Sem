/*
    Prova Final - Exercício 1
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int i, vet[13], res[13];
    
    //Recebe os valores
    for(i=0; i<13; i++)
    {
        printf (" Digite o %iº número: ", i+1);
        scanf ("%i", &vet[i]);  
    }
    
    //Calcula os valores
    for(i=0; i<13; i++)
    {
        if(vet[i] < vet[i+1])
        res[i]=-1;
        
        else
        res[i]=0;  
    }
    
    //Mostra os Resultados
    printf("\n ========================\n\n");
    for(i=0; i<13; i++)
    {
        printf (" %i", res[i]); 
    }
    
    return 0;
}
