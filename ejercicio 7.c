//precio de un ticket ida y vuelta conociendo la distancia y los dias de estancia//

#include<stdio.h>

int main()
{
    float dist, distot, est, pre, des;
    
    printf("¿Cuanta distancia piensa recorrer de ida? (en km): ");
    scanf("%f",&dist);
    printf("¿Cuantos dias estará ahí?: ");
    scanf("%f",&est);
    
    dist=dist+dist;
    
    if (dist>800 && est>7)
    {
        distot= dist*0.23;
        des=distot*0.30;
        pre= distot-des;
        printf("El precio a pagar con más de 7 dias de estancia es: %f",pre);
    }
    else
    {
        distot= dist*0.23;
        printf("No hay descuento, el precio sera: %f", distot);
    }
    return 0;
}
