
#include <stdio.h>
int main()
{
    double x, ht, vh, sal;
    scanf("%lf %lf %lf", &x, &ht, &vh);
    sal = ht * vh;
    printf("NUMBER = %.0lf\nSALARY = U$ %.2lf\n", x, sal);
    return 0;
}