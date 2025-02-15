//Check Odd or Even Number Using Modulo Operator

#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    if( num % 2 == 0 ) {
    	printf("%d is even\n", num);
	} else {
		printf("%d is odd ", num);
	}
    return 0;
}
