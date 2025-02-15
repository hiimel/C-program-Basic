#include<stdio.h>

int main() {
	
	int a = 23, b = 34, c = 13;
	
	if( a>b && a>c) {
		printf("%d is the largest number\n ", a);
	} if( b>a && b>c) {
		printf("%d is the largest number\n", b);
	} else {
		printf("%d is the largest number ", c);
	}
	return 0;
}