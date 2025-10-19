#include <stdio.h>
#include <math.h>
int main(){
	int n=6996;
	int a=n % 10;
	n /= 10;
	int b=n % 10;
	n /= 10;
	int c=n % 10;
	n /= 10;
	int d=n % 10;
	int S=a+b+c+d;
	printf("S = %d", S);
	return 0;
}
