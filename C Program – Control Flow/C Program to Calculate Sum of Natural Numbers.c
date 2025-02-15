//Using for loop

#include<stdio.h>

int main() {
	int num = 10 ,sum = 0;
	
	for(int i = 1; i <= num; i++) {
		sum += i;
	}
     printf("Sum = %d", sum);
     return 0;
}