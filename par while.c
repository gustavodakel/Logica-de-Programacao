#include<stdio.h>

int main()
{
   int vet[10];
   int par = 0, impar = 0, g = 0, d = 0;
   
    while(g < 10)
	{
    scanf("%d",&vet[g]);
    g++; 
    }

    while(d < 10)
    {
        if(vet[d] % 2 == 0)
        {
          par++;
        }
        else	
        {
            impar++;
        }
        d++;	
    }	
    
    printf("numeros pares: %d\n",par);
    printf("numeros impares: %d\n",impar);
    
 return (0);
}