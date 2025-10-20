#include <stdio.h>
int main(){
	char name [50];
	printf("Ten cua ban:");
	scanf("%[^\n]", name);
	printf("Ten cua ban: %s \n", name);
	printf("Xin chào %s", name);
	return 0;
}
