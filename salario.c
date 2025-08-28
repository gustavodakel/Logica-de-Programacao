#include <stdio.h>
 
int main() {
 
    int fun = 0;
    int horas = 0;
    double valor = 0.0;
    double sal = 0.0;
    
    scanf("%d",&fun);
    scanf("%d",&horas);
    scanf("%lf",&valor);
 
    sal = horas * valor;
    
    printf("NUMBER = %d\n",fun);
    printf("SALARY = U$ %.2lf\n",sal);
 
    return 0;
}