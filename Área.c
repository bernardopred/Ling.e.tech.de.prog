#include <stdio.h>
#include <math.h> 
int main() {
 double x, y, z, zz, pi;
 pi = 3.14159;
 scanf("%lf %lf %lf", &x, &y, &z);
 double a, b, c, d, e;
 // a) a área do triângulo retângulo que tem A por base e C por altura
 a = x*z/2;
 // b) a área do círculo de raio C
 zz = pow(z,2);
 b = zz*pi;
 // c) a área do trapézio que tem A e B por bases e C por altura
 c = ((x+y)*z)/2;
 // d) a área do quadrado que tem lado B
 d = y*y;
 // e) a área do retângulo que tem lados A e B
 e = x*y;
 printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", a, b, c, d, e);
    return 0;
}
