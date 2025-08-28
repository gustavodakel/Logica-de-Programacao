#include <stdio.h>
 
int main() {
 
 int cod = 0;
 int quant = 0;
 double preco = 0.0;
 double total  = 0.0;
 
 int cod2 = 0;
 int quant2 = 0;
 double preco2 = 0.0;
 double total2 = 0.0;
 double total3 = 0.0;
 
  scanf("%d\n", &cod);
  scanf("%d\n", &quant);
  scanf("%lf\n", &preco);
  total = quant * preco;
  
  scanf("%d\n", &cod2);
  scanf("%d\n", &quant2);
  scanf("%lf\n", &preco2);
  total2 = quant2 * preco2;
  
  total3 = total + total2;
  
  printf("VALOR A PAGAR: R$ %.2lf\n",total3);
 
    return 0;
}