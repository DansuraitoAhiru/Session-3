#include <stdio.h>
#include <math.h>
int main(){
	float n;
	printf("n=");
	scanf("%f", &n);
	float A = 1/((n-1)*n) + 1/(n*(n+1)) + 1/((n+1)*(n+2));
	printf("A = %.2f", A);
	return 0;
}

