//considere un aumento del 15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.//

#include<stdio.h>

int main()
{
    float sueldo, aum, tot;
    
    printf("Ingrese el sueldo del empleado:");
    scanf("%f",&sueldo );
    
    if (sueldo<1000)
    {
        aum=sueldo*0.15;
        tot=aum+sueldo;
        
        printf("El sueldo con aumento es: %f",tot);
    }
    else
    {
        aum=sueldo*0.12;
        tot=aum+sueldo;
        
        printf("El sueldo con aumento es: %f",tot);
    }
    
    return 0;
}
