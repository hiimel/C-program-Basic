#include<stdbool.h>
#include<stdio.h>

int main() {
    int n = 4;
    bool isPrime = true;

    for(int i = 2; i < n; i++) {
        if( n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) {

        printf("Prime number\n");
    } else {
        printf("non Prime number");
    }
    return 0;
}
