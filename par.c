#include<stdio.h>

int main()
{
   int vet[10];
   int par = 0, impar = 0;
   
    for(int i = 0 ; i < 10; i++)
	{
    scanf("%d",&vet[i]); 
    }

    for(int g = 0 ; g < 10; g++)
    {
        if(vet[g] % 2 == 0)
        {
          par++;
        }
        else	
        {
            impar++;
        }	
    }	
    
    printf("numeros pares: %d\n",par);
    printf("numeros impares: %d\n",impar);
    
 return (0);
}