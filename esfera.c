#include <stdio.h>
 
int main() {
 
   double raio = 0.0;
   double PI = 3.14159;
   double result = 0.0;
    
    scanf("%lf",&raio);
    
    result = raio * raio * raio * PI * (4.0/3);
    
    printf("VOLUME = %.3lf\n",result); 
   
   return 0;
}