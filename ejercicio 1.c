//Programa que calcule la suma, resta y multiplicacion de dos numeros dados//

#include<stdio.h>

int main()
{
    float a,b;
    float sum, rest, mult;
    
    printf("Dame dos numeros separados con una coma: ");
    scanf("%f,%f", &a, &b);
    
    sum= a+b;
    printf("La suma es: %f\n",sum);
    
    rest= a-b;
    printf("La resta es: %f\n", rest);
    
    mult= a*b;
    printf("La multiplicación es: %f\n", mult);
    
    return 0;
}
