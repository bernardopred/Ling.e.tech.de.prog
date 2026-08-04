#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Calculadora Paleolítica\n");
	printf("Insira dois números:\n");
	int x, y, z;
	scanf("%d %d", &x, &y);
	z = x + y;
	printf("A soma dos números é: %d\n", z);
	return 0;
}
