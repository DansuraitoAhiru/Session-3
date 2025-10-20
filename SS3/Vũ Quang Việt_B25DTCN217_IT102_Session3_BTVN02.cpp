#include <stdio.h>
#include <math.h>
int main(){ 
	float C;
	printf("C=");
	scanf("%f", &C);
	float F = C * 9/5 + 32;
	printf("F = %.1f", F);
	return 0;
}

