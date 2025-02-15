#include<stdio.h>
#include<math.h>

int main() {
    int lower, upper;

    scanf("%d %d", &lower, &upper);

    if(lower > upper) {
       int temp = lower;
       lower = upper;
    }

    printf("Amstrong number %d and %d are : ", lower, upper);

    for(int num = lower; num <= upper; num++) {
        int orginal = num, sum = 0, n = 0;

        while( orginal != 0) {
            orginal /= 10;
            n++;
        }
        orginal = num;

        while(orginal != 0) {
            int digit = orginal % 10;
            sum += pow(digit, n);
            orginal /= 10;
        }

        if(sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}
