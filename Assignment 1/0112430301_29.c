/*Program that will take a floating point number X as input and evaluate A,B,C where,
    A = Value when X is rounded up to the nearest integer
    B = Value when X is rounded down to the nearest integer
    C = Absolute value of X*/
#include <stdio.h>
#include <math.h>

int main (void) {
    float X, C;
    int A, B;
    printf("Please enter X: ");
    scanf("%f", &X);
    A = ceil(X);
    B = floor(X);
    C = fabs(X);
    printf("A = %d, B = %d, C = %.2f", A, B, C);
}