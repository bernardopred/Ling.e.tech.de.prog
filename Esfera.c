#include <stdio.h>
#include <math.h>
int main() {
    double a, aa, b, pi;
    pi = 3.14159;
    //aa vai ser usado como "a" elevado a 3
    scanf("%lf", &a);
  //pow é potenciação do math.h
    aa = pow(a,3);
    b = (4/3.0)*pi*aa;
    printf("VOLUME = %.3lf\n", b);
    return 0;
}
