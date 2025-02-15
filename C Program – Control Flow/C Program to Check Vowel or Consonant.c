#include<stdio.h>

int main() {
	char ch = 'h';
	
	if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
        || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U') {
        	printf("The char %c is voewl\n", ch);
		} else {
			printf("The char %c is consonant \n", ch);
		}
return 0;		
}