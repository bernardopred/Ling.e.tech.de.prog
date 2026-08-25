#include <stdio.h>
#include <math.h>
 
int main() {
    int numint, a, b, c, d, e, f, g;
    double num, numd, ccnq, cvnt, cdez, ccnc, cum;
    scanf("%lf", &num);
    numint = num;
    a = numint/100;
    b = (numint%100)/50;
    c = ((numint-100*a)%50)/20;
    d = ((numint-(100*a+50*b))%20)/10;
    e = ((numint-(100*a+50*b+20*c))%10)/5;
    f = ((numint-(100*a+50*b+20*c+10*d))%5)/2;
    g = (numint-(100*a+50*b+20*c+10*d+5*e))%2;
    
    numd = (num-(100*a+50*b+20*c+10*d+5*e+2*f+1*g));
    if(numd<1 && numd>0){
        ccnq = numd/0.5;
        cvnt = (fmod(numd, 0.5))/0.25;
        cdez = (fmod((numd-0.5*ccnq) , 0.25))/0.1;
        ccnc = (fmod((numd-(0.5*ccnq+0.25*cvnt)) , 0.1))/0.05;
        cum =  fmod((numd-(0.5*ccnq+0.25*cvnt+0.1*cdez)),0.05);
    }
    
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", a, b, c, d, e, f);
    printf("MOEDAS:\n%d moeda(s) de R$1.00\n%.0lf moeda(s) de R$0.50\n%.0lf moeda(s) de R$0.25\n%.0lf moeda(s) de R$0.10\n%.0lf moeda(s) de R$0.05\n%.0lf moeda(s) de R$0.01", g, ccnq, cvnt, cdez, ccnc, cum);
    return 0;
}
