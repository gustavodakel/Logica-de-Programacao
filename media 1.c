#include <stdio.h>
 
int main() {
 
   double a = 0.0;
   double b = 0.0;
   double a1 = 3.5;
   double b1 = 7.5;
   double media = 0.0;
   
   scanf("%lf",&a);
   scanf("%lf",&b);
   
   media = ((a * a1) + (b * b1)) / (a1 + b1);
   
   printf("MEDIA = %.5lf\n",media);
   
    return 0;
}