#include <stdio.h>
#include <math.h>
int main() {
double x, y;
double n = 3.14159;
scanf("%lf", &y);
double yy = pow(y,2);
x = yy * n;
printf("A=%.4lf\n", x);
return 0;
}
