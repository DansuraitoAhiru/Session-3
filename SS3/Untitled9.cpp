#include <stdio.h>
#include <math.h>
int main(){
	float n=6;
	float A= 1/((n-1)*n) + 1/(n*(n+1)) + 1/((n+1)*(n+2));
	printf("A = %f", A);
	return 0;
}
