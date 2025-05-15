//Descuento si de 8% si es mayor a 2500 morlacos//

#include<stdio.h>

int main()
{
    float mor,des,tot;
    
    printf("Ingrese el gasto en pesos: ");
    scanf("%f",&mor);
    
    if(mor>2500)
    {
        des=mor*0.08;
        
        tot=mor-des;
        printf("El precio total a pagar es: %f", tot);
    }
   else
    {
      printf("La compra no fue mayor a 2500 pesos, no se aplicará descuento");
    }
   
    return 0;
}
