#include <stdio.h>
#include <math.h>
int main(){
	int a=9;
	int b=6;
	float S=sqrt(a+sqrt(b+1)) + sqrt(b+sqrt(pow(a,2) + pow(b,2)));
	printf("S = %.2f", S);
	return 0;
}
