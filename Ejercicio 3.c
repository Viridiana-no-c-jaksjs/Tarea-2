//programa que cambie de dólares a pesos//

#include<stdio.h>

int main()
{
    float pesos=11.960;
    float dolar=0 ;
    float cambio;
    
    printf("ingrese el valor en dólares a convertir:");
    scanf("%f", &dolar);
    
    cambio= dolar*pesos;
    
    printf("El cambio en pesos es: %f", cambio);
    
    return 0;
}
