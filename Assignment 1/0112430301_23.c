//Program that will take two numbers as inputs and print the maximum value. (Usingconditional operator - ?)

#include <stdio.h>

int main (void) {
    int a, b;

    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    (a > b) ? printf("Max: %d", a) : printf("Max: %d", b);
}