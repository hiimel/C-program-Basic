#include<stdio.h>

int main() {
	int hcf, num1, num2, min, i;

	scanf("%d %d", &num1, &num2);

	min =(num1 < num2)? num1:num2;
	for(i = min; i>= min; i--) {
		if( i%num1 == 0 && i%num2 == 0 ) {
            hcf = i;
			break;
		}
	}
	printf("HCF of %d and %d is : %d\n", num1, num2,i);
	return 0;
}
