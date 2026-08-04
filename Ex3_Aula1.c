#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d;
    printf("Insira três valores para fazer uma média:\n");
    scanf("%d %d %d", &a, &b, &c);
    d = (a+b+c)/3;
    printf("A média aritmética de %d, %d e %d é: %d\n", a, b, c, d);
    return 0;
}
