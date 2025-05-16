//como entrada un arreglo unidimensional de enteros, obtenga como resultado la suma de los mismos//


#include <stdio.h>
int main() 
{
    int n, i, buscar, contador = 0;
    printf("¿Cuantos elementos tendrá el arreglo?: ");
    scanf("%d", &n);
    
    int arreglo[n];
    
    for(i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    
    printf("¿Que numero estas buscando?: ");
    scanf("%d", &buscar);
    
    for(i = 0; i < n; i++) 
    
    {
        if(arreglo[i] == buscar) 
        {
            contador=contador+1;
        }
    }
    
    printf("El número que se queria buscar aparece %d veces en el arreglo.\n", contador);
    
    return 0;
}  
