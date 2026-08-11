#include <stdio.h>
#include <math.h>
int main() {
double areac, r;
double pi = 3.14159;
printf("Qual a área de seu círculo?\n");
scanf("%lf", &r);
//pow é potenciação
areac = pow(r,2)*pi;
printf("A área do círculo é = %.4lf\n", areac);
return 0;
double b, B, h, areat;
  printf("Qual a base maior de seu trapézio?\n");
  scanf("%lf", &B);
  printf("Qual a base menor de seu trapézio?\n");
  scanf("%lf", &b);
  printf("Qual a altura de seu trapézio?\n");
  scanf("%lf", &h);
  if(b=B=h){
    printf("ISSO É UM QUADRADO!!!!");
  }
  else{
    areat = (b+B)*h/2;
    printf("A área do trapézio é: %.2lf\n" areat);
}
