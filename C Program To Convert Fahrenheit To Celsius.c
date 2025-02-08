#include<stdio.h>

int main() {
    float celsius, farhenheit = 72;

    celsius = (5.0/9.0) *(farhenheit - 32);
    printf("Tempreture in Celsius = %.2lf\n",celsius);

    return 0;
}