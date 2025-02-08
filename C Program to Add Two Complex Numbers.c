#include<stdio.h>

int main() {
    
    float real1, img1;
    float real2, img2;
    float sum_real, sum_img;

    scanf("%f %f", &real1, &img1);
    scanf("%f %f", &real2, &img2);

    sum_real = real1 + real2;
    sum_img = img1 + img2;

    printf("The sum of two complex number = %.2f + %.2fi\n", sum_real, sum_img);

    return 0;

}
