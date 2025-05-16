//Determinar cuantos numeros son positivos, negativos o nulos en un arreglo dado//

#include <stdio.h>

int main() 
{
    int n,i;
    int positivos = 0, negativos = 0, nulos = 0;
    printf("Ingrese la cantidad de números a evaluar: ");
    scanf("%d", &n);

    int arreglo[n];
    

    for (int i = 0; i < n; i++) 
    {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        
        if (arreglo[i] > 0)
        {
            ++positivos;
        }
        else 
        if (arreglo[i] < 0) 
        {
            ++negativos;
        } 
        else 
        {
            ++nulos;
        }
    }

    printf("Cantidad de números positivos: %d\n", positivos);
    printf("Cantidad de números negativos: %d\n", negativos);
    printf("Cantidad de números nulos (ceros): %d\n", nulos);

    return 0;
}
