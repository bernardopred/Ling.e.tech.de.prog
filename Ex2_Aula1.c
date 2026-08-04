#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, z;
    printf("Qual a altura e a base de seu triângulo retângulo?\n");
    scanf("%d %d", &x, &y);
    z = (x*y)/2;
    printf("A área de seu triângulo é: %d\n", z);
    return 0;
}
