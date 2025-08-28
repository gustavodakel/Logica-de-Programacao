#include <stdio.h>
 
int main() {
 
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int dife = 0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    
    dife = (a * b) - (c * d);
    
    printf("DIFERENCA = %d\n",dife);
    
    return 0;
}