#include <stdio.h>
#include <math.h>
int main() {
double x, y;
double n = 3.14159;
printf("Qual a área de seu círculo?\n");
scanf("%lf", &y);
//pow é potenciação
double yy = pow(y,2);
x = yy * n;
printf("A área do círculo é = %.4lf\n", x);
return 0;
}
