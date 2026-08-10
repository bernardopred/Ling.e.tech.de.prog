#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double xa, xb, ya, yb, d;
    scanf("%lf %lf", &xa, &ya);
    scanf("%lf %lf", &xb, &yb);
    d = sqrt(pow(xb-xa,2)+pow(yb-ya,2));
    printf("%.4lf\n", d);
    return 0;
}
