//calcule e imprima el producto de los N primeros numeros naturales.//

#include<stdio.h>

int main()
{
    int n,i, sum=0;
    
    printf("Dame un numero natural: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++)
    {
        sum= i+ sum;
    }
    
    printf("La sumatoria de los iguales y menores al elegido son: %d", sum);
    
    return 0;
}
