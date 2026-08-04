#include <stdio.h>
int main() {
int w, x, y, z, wx, yz, a;
scanf("%d %d %d %d", &w,&x,&y,&z);
wx = w * x;
yz = y * z;
a = wx - yz;
printf("DIFERENCA = %d\n", a);
return 0;
}
