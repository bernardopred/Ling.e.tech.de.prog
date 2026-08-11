#include <stdio.h>
int main() {
    int num, a, b, c, d, e, f, g;
    scanf("%d", &num);
    a = num/100;
    b = (num%100)/50;
    c = ((num-100*a)%50)/20;
    d = ((num-(100*a+50*b))%20)/10;
    e = ((num-(100*a+50*b+20*c))%10)/5;
    f = ((num-(100*a+50*b+20*c+10*d))%5)/2;
    g = (num-(100*a+50*b+20*c+10*d+5*e))%2;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", num, a, b, c, d, e, f, g);
    return 0;
}
