//leer 100 numeros naturales y cuente cuantos de ellos son positivos, negativos o nulos.//

#include<stdio.h>

int main()
{
    int ps=0, ng=0, cr=0, num;
    
    printf("ingrese 100 numeros\n");
    
    for (int i = 1; i <= 100; i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", &num);
        
        if (num >0)
        {
            ps=ps+1;
        }
        else
        {
            if (num<0)
            {
                ng=ng+1;
            }
            else
            {
                cr=cr+1;
            }
        }
    }
    printf ("El numero total de positivos es: %d\n", ps);
    printf ("El numero total de negarivos es: %d\n", ng);
    printf ("El numero total de numeros nulos es: %d\n", cr);
    
    return 0;
}
