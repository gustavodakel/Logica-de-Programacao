#include <stdio.h>
 
int main() {
 
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double PI = 3.14159;
    double area_tri = 0.0;
    double area_cir = 0.0;
    double area_tra = 0.0;
    double area_qua = 0.0;
    double area_ret = 0.0;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    area_tri = (a * c) / 2;

    area_cir = PI * c * c;
    
    area_tra = ((a + b) * c) / 2;

    area_qua = b * b;
    
    area_ret = a * b;
    
    printf("TRIANGULO: %.3lf\n",area_tri);
    printf("CIRCULO: %.3lf\n",area_cir);
    printf("TRAPEZIO: %.3lf\n",area_tra); 
    printf("QUADRADO: %.3lf\n",area_qua);
    printf("RETANGULO: %.3lf\n",area_ret);

   return 0;
}