// using for loop
#include<stdio.h>

int main() {
	int num = 5;
	long long fact = 1;
	
	for(int i=1; i<=num; i++) {
		fact *= i;
	}
	printf("The factorial number of %d is : %lld\n", num, fact);
	return 0;
}