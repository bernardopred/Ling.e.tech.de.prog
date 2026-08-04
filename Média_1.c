#include <stdio.h>
int main() {
 double x, y, z;
 scanf("%lf %lf", &y, &z);
 double yy = y * 3.5;
 double zz = z * 7.5;
 double zy = yy + zz;
 x = zy / 11;
 printf("MEDIA = %.5lf\n", x);
    return 0;
}
