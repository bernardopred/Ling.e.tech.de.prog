#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int prim, seg;
    //prim = primeiro, seg = segundo
    printf("Insira dois numeros: \n");
    scanf("%d %d", &prim, &seg);
    printf("Voce forneceu os numeros: %d e %d\n", seg, prim);
    
    
    //Exercicio 2
    double cien;
    int n;
    n = 0;
    printf("Insira numero que quer em notacao cientifica: \n");
    scanf("%lf", &cien);
     while(cien > 10) {
        cien = cien / 10;
        n++;
    }
    printf("%.2lfx10^%d\n", cien, n);
    
    //Exercicio 3
    
    //Exercicio 4
    double sal, vnd, com, total;
    char nome [20];
    printf("Insira o nome, salario e as vendas: \n")
    scanf("%s %lf %lf", &nome, &sal, &vnd);
    com = vnd * 0.15;
    total = com + sal;
    printf("TOTAL = R$ %.2lf\n", total);
    
    //Exercicio 6
    int age, dia, mes, ano;
    printf("Insira a idade da pessoa em dias: \n")
    scanf("%d", &age);
    ano = age/365;
    mes = (age%365)/30;
    dia = (age%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
return 0;
}
