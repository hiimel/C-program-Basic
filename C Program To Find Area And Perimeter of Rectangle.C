#include <stdio.h>

int main() {
	int l = 10, b = 10; 

    int area = l * b;
    int perimeter = 2 * ( l + b );

	printf( "Area of rectangle is : %d\n", area );
	printf( "Perimeter of rectangle is : %d\n", perimeter );

	return 0;
}
