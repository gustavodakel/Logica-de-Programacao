#include <stdio.h>
 
double RaizQuadrada(double a);
 
int main() {
 
   double x1 =0.0;
   double x2 =0.0;
   double y1 =0.0;
   double y2 =0.0;
   double a =0.0;
   double dist =0.0;
   
   scanf("%lf %lf",&x1,&y1);
   scanf("%lf %lf",&x2,&y2);
   
   a=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

   dist = RaizQuadrada(a);
   
   printf("%.4lf\n",dist);
   
    return 0;
}

double RaizQuadrada(double a)
{
	double x = a;
	double novo_x = 0.0;
	for(int i = 0; i < 100; i++)
	{
		novo_x = (0.5)*(x+(a/x));
		
		x = novo_x;
		
	}
	return(x);
}
