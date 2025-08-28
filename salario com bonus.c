#include <stdio.h>
 
int main() {
 
    char nome[20];
    double sal = 0.0;
    double ven = 0.0;
    double salf = 0.0;
    
    scanf("%s",nome);
    scanf("%lf",&sal);
    scanf("%lf",&ven);
    
    salf = (ven * 0.15) + sal;
    
    printf("TOTAL = R$ %.2lf\n",salf);
 
    return 0;
}