#include <stdio.h>
#include <math.h>

int main() {
    int cnt, rem, number, count = 0, result = 0, mul = 1;

    scanf("%d", &number);

    int q = number;

    while(q != 0) {
        q /= 10;
        count++;
    }
    cnt = count;
    q = number;
    while(q != 0) {
        rem = q % 10;
        while( cnt != 0) {
            mul = mul * rem;
            cnt--;
        }
        result += mul;
        cnt = count;
        q /= 10;
        mul = 1;
    }
    if(result == number) {
        printf("%d is an amstrong number\n", number);
    } else {
        printf("%d is not an amstrong number\n", number);
    }
    return 0;
}

