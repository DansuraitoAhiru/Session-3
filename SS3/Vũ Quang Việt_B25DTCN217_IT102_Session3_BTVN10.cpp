#include <stdio.h>
#include <math.h>
int main(){
	unsigned a,b;
	printf("a=");
	scanf("%u", &a);
	printf("b=");
	scanf("%u", &b);
	float S=sqrt(a+sqrt(b+1)) + sqrt(b+sqrt(pow(a,2) + pow(b,2)));
	printf("S = %.2f", S);
	return 0;
}

