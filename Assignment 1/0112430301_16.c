/*Program that will take two numbers X and Y as inputs, then calculate and print the values of
their addition, subtraction, multiplication, division (quotient and reminder).*/

#include <stdio.h>

int main (void) {
    float a, b, add, sub, multi, quo, rem;
    printf("Enter the first number : ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);

    add = a + b;
    sub = a - b;
    multi = a * b;
    quo = a / b;
    rem = (int) a % (int) b;

    printf("Addition: %.1f\nSubtraction: %.1f\nMultiplication: %.1f\nQuotient: %.0f\nReminder: %.0f", add, sub, multi, quo, rem);
}