#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("n=");
	scanf("%d", &n);
	int a=n%10;
	n/=10;
	int b=n%10;
	n/=10;
	int c=n%10;
	n/=10;
	int d=n%10;
	int u=a*1000+b*100+c*10+d;
	printf("u = %d", u);
	return 0;
}
