#include<stdio.h>

int main() {
    int x, num, mem, sum;

    for(int i=1; i<=1000; i++) {
        sum = 0;
        num = i;
        mem = num;

        while(num > 0) {
            x = num % 10;
            num /= 10;
            sum += x * x * x;
        }

        if(sum == mem) {
            printf("%d\n", i);
        }
    }
    return 0;
}
