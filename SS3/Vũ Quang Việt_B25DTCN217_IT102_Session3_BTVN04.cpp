#include <stdio.h>
#include <math.h>
int main(){
	float T,V,A;
	printf("T= ");
	scanf("%f", &T);
	printf("V= ");
	scanf("%f", &V);
	printf("A= ");
	scanf("%f", &A);
	float sum = T + V + A;
	float TB= sum / 3;
	printf("sum = %.2f \n", sum);
	printf("TB = %.2f \n", TB);
	return 0;
}
