//determinar, dados dos ńumeros enteros, si un numero es divisor del otro//

#include<stdio.h>

int main()
{
    int a, b; 
    printf("Dame dos numeros separados por una coma: ");
    scanf("%d,%d",&a,&b);
    
    if(a % b ==0)
    {
        printf("los dos numeros si son divisores");
    }
    else
    {
        printf("los dos numeros, no son divisores");
    }
    
    return 0;
}
