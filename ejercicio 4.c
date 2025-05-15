//Inversión de dinero con un interes dado//

#include<stdio.h>

int main()
{
    float din, tasa, t, total, pstot;
    
    printf("ingrese la cantidad de dinero: ");
    scanf("%f",&din);
    
    printf("ingrese el porcentaje de tasa mensual: ");
    scanf("%f",&tasa);
    
    t= tasa/100;
    total= t*din;
    
    pstot= total+din;
    printf("la cantidad total despues de un mes será: %f", pstot);
    return 0;
}
