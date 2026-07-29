#include <stdio.h>
int main() {
double cdg1, cdg2, qnt1, qnt2, vu1, vu2;
scanf("%lf %lf %lf", &cdg1, &qnt1, &vu1);
scanf("%lf %lf %lf", &cdg2, &qnt2, &vu2);
double vf;
vf = ( qnt1 * vu1 ) + ( qnt2 * vu2 );
printf("VALOR A PAGAR: R$ %.2lf\n", vf);
    return 0;
}
