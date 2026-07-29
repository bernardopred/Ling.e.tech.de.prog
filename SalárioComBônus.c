#include <stdio.h>
int main() {
double sal, vnd, com, total;
char nome [20];
scanf("%s %lf %lf", &nome, &sal, &vnd);
com = vnd * 0.15;
total = com + sal;
printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
