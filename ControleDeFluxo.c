#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	printf("Insira três números: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b && a>c){
		printf("%d é o maior!\n", a);
	}
	if(b>a && b>c){
		printf("%d é o maior!\n", b);
	}
	if(c>a && c>b){
		printf("%d é o maior!\n", c);
	}
}
