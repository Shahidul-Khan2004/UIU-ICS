/*Program that will take two numbers X and Y as inputs, then calculate and print the values of
their addition, subtraction, multiplication, division (quotient and reminder).*/

#include <stdio.h>

int main (void) {
    float X, Y, add, sub, multi;
    int quo, rem;
    printf("Enter the first number : ");
    scanf("%f", &X);
    printf("Enter the second number: ");
    scanf("%f", &Y);

    add = X + Y;
    sub = X - Y;
    multi = X * Y;
    quo = (int) X / (int) Y;
    rem = (int) X % (int) Y;

    printf("Addition: %.1f\nSubtraction: %.1f\nMultiplication: %.1f\nQuotient: %d\nReminder: %d", add, sub, multi, quo, rem);
}