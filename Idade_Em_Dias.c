#include <stdio.h>
int main() {
    int age, dia, mes, ano;
    scanf("%d", &age);
    ano = age/365;
    mes = (age%365)/30;
    dia = (age%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    return 0;
}
