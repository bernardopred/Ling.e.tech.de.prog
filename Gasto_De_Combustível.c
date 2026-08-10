#include <stdio.h>
int main() {
    double h, kmh, kml;
    scanf("%lf %lf", &h, &kmh);
    kml = (h*kmh)/12;
    printf("%.3lf\n", kml);
    return 0;
}
