//Program that will take two numbers (a, b) as inputs and compute the value of the equation

#include <stdio.h>

int main (void) {
    float a, b, X;
    printf("Please enter a: ");
    scanf("%f", &a);
    printf("Please enter b: ");
    scanf("%f", &b);

    X = (3.31 * a * a + 2.01 * b * b * b) / (7.16 * b * b + 2.01 * a * a * a);
    printf("X = %f", X);
}

