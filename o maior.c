#include <stdio.h>
 
int main() {
 
   int a = 0;
   int b = 0;
   int c = 0;
   int maiorAB = 0;
   
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   
   maiorAB = (a + b + abs(a - b)) / 2;
   
   if(maiorAB > c)
   {
       printf("%d eh o maior\n",maiorAB);
   }
   else if(maiorAB < c)
   {
       printf("%d eh o maior\n",c);
   }
   
    return 0;
}