#include <stdio.h>
#include <stdlib.h>
int main(){
    double gas, km, kml;
    scanf("%lf %lf", &km, &gas);
    kml = km/gas;
    printf("%.3lf km/l\n", kml);
}
