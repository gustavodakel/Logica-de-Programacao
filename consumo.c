#include <stdio.h>
 
int main() {
 
   int x = 0;
   double y = 0.0;
   double con = 0.0;
   
   scanf("%d",&x);
   scanf("%lf",&y);
   
   con = x / y;
   
   printf("%.3lf km/l\n",con);
   
    return 0;
}