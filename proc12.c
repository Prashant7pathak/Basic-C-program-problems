#include <stdio.h>

double myPow(double base, int exponent) {
    double result = 1.0;
    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("Result: %f\n", myPow(base, exponent));

    return 0;
}