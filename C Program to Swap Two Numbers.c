#include<stdio.h>

int main() {
    int a = 1;
    int b = 5;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("a = %d\n \nb = %d", a, b);
    return 0;
}