//la tabla de multiplicar de un numero entero N, comenzando desde el 1.//

#include<stdio.h>

int main()
{
    int N, i=1, R;
    printf("Ingrese el numero para determinar su tabla de multiplicar: ");
    scanf("%d",&N);
    
    for (i=1; i<=10; i++)
    {
        R=N*i;
        printf("%d x %d= %d \n", N,i,R);
    }
    
    return 0;
}
