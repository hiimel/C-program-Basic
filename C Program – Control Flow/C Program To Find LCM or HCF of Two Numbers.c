#include<stdio.h>

int main() {
	int num1, num2, max, i;
	
	scanf("%d %d", &num1, &num2);
	
	max = (num1 > num2)? num1:num2;
	for( i= max; ; i++) {
		if(i%num1 == 0 && i%num2 == 0) {
			break;
		}
	}
	printf("LCM of %d and %d is : %d\n", num1, num2, i);
	return 0;
}