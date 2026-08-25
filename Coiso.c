include <stdio.h>
int main() {
    int numint, a, b, c, d, e, f, g, numdcem;
    double num, numd;
    int ccnq, cvnt, cdez, ccnc, cum;
    scanf("%lf", &num);
    numint = num;
    a = numint/100;
    b = (numint%100)/50;
    c = ((numint-100*a)%50)/20;
    d = ((numint-(100*a+50*b))%20)/10;
    e = ((numint-(100*a+50*b+20*c))%10)/5;
    f = ((numint-(100*a+50*b+20*c+10*d))%5)/2;
    g = (numint-(100*a+50*b+20*c+10*d+5*e))%2;
    
   numd = num - numint;
   numdcem = numd*100;
    
    ccnq = (numdcem%100)/50;
    cvnt = (numdcem%50)/25;
    cdez = ((numdcem-(50*ccnq))%25)/10;
    ccnc = ((numdcem-(50*ccnq+25*cvnt))%10)/5;
    cum  = ((numdcem-(50*ccnq+25*cvnt+10*cdez))%5);
    
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", a, b, c, d, e, f);
    printf("MOEDAS:\n%d moeda(s) de R$1.00\n%d moeda(s) de R$0.50\n%d moeda(s) de R$0.25\n%d moeda(s) de R$0.10\n%d moeda(s) de R$0.05\n%d moeda(s) de R$0.01", g, ccnq, cvnt, cdez, ccnc, cum);
    return 0;
}