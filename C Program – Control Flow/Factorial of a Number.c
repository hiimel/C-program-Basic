// using while loop

#include<stdio.h>

int main() {

	int i = 1, num = 5;
	int fact = 1;
	
	while(i <= num) {

		fact *= i;
		i++;
	}
	
	printf("The factorial number oF %d is : %d\n", num, fact);
	return 0;
}