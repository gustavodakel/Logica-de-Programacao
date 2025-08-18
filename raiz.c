#include <stdio.h>
 
int main() {
	
   double num = 0.0;
   double x = 0.0;
   double novo = 0.0;
  
	scanf("%lf", &num);
	 x = num;
	 
	  for (int i = 0; i<1000; i++);
	    {	  
         	novo = 0.5*(x+num/x);
			x = novo;
	    }	
		
  return 0;
}
