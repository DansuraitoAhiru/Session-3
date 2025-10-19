#include <stdio.h>
#include <math.h>
int main(){
	float r=36;
	float P=2*M_PI*r;
	float S=M_PI*pow(r,2);
	printf("P = %.2f \n", P);
	printf("S = %.2f \n", S);
	return 0;
}
