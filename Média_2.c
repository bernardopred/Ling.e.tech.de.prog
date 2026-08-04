#include <stdio.h>
int main() {
double x, y, z, xx, yy, zz, xyz, a;
scanf("%lf %lf %lf", &x, &y, &z);
xx = x * 2;
yy = y * 3;
zz = z * 5;
xyz = xx + yy + zz;
a = xyz / 10;
printf("MEDIA = %.1lf\n", a );
return 0;
}
