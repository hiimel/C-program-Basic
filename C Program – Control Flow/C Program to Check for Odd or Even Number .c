// Check Odd or Even Number Using Bitwise AND Operator

#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    if( num & 1 ) { //Bitwise AND Operator
    	printf("%d is even\n", num);
	} else {
		printf("%d is odd ", num);
	}
    return 0;
}
