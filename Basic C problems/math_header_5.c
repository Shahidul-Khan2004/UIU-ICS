/*Write a C program that will solve the following quadratic equation:
                ax^2 + bx + c = 0*/
#include <stdio.h>
#include <math.h>

int main (void) {
    float a, b, c, x1, x2;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    printf("x1 = %.2f\nx2 = %.2f", x1, x2);
}