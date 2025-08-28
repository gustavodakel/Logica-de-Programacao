#include <stdio.h>
 
int main() {
 
   int valor = 0;
   int valor2 = 0;
   int resto = 0;
   int resto2 = 0;
   int n100 = 0;
   int n50 = 0;
   int n20 = 0;
   int n10 = 0;
   int n5 = 0;
   int n2 = 0;
   int m1 = 0;
   int m050 = 0;
   int m025 = 0;
   int m010 = 0;
   int m005 = 0;
   int m001 = 0;


scanf("%d.%d",&valor,&valor2);

n100 = valor / 100;
resto = valor%100;

n50 = resto / 50;
resto = resto%50;

n20 = resto / 20;
resto  =resto%20;

n10 = resto / 10;
resto = resto%10;

n5 = resto / 5;
resto = resto%5;

n2 = resto / 2;
resto= resto%2;

m1 = resto;


m050 = valor2 / 50;
resto2 = valor2%50;

m025 = resto2 / 25;
resto2 = resto2%25;

m010 = resto2 / 10;
resto2  =resto2%10;

m005 = resto2 / 5;
resto2 = resto2%5;

m001 = resto2;


 
 printf("NOTAS:\n");
 printf("%d nota(s) de R$ 100.00\n",n100);
 printf("%d nota(s) de R$ 50.00\n",n50);
 printf("%d nota(s) de R$ 20.00\n",n20);
 printf("%d nota(s) de R$ 10.00\n",n10);
 printf("%d nota(s) de R$ 5.00\n",n5);   
 printf("%d nota(s) de R$ 2.00\n",n2);
 printf("MOEDAS:\n");
 printf("%d moeda(s) de R$ 1.00\n",m1); 
 printf("%d moeda(s) de R$ 0.50\n",m050);
 printf("%d moeda(s) de R$ 0.25\n",m025);
 printf("%d moeda(s) de R$ 0.10\n",m010);
 printf("%d moeda(s) de R$ 0.05\n",m005);
 printf("%d moeda(s) de R$ 0.01\n",m001); 

 return 0;
}