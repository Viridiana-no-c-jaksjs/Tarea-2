//calcule la suma de los numeros pares comprendidos entre el 10 y 50//

#include<stdio.h>

int main() 
{
    int sum=0, i=10, x;
    
    for(i=10;i<=50;i++)
    
    {
        x = i % 2;
      if(x==0)
      {
          sum=sum + i;
      }
    }
    printf("La sumatoria de los numeros pares entre 10 y 50 es:%d",sum);
    
    return 0;
}
