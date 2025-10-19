#include <stdio.h>
#include <math.h>
int main(){
	int a=6;
	int b=9;
	float S=(sqrt(pow(a,2) + pow(b,2))) / (a+b) + (sqrt(a) + sqrt(b))/ (a*b);
	printf("S = %.2f", S);
	return 0;
}
