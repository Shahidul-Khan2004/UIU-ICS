//Program that will increment and decrement a number X by 1 inside the printf function. (Use++ and -- operators)

#include <stdio.h>

int main (void) {
    int X, a, b, c, d;
    printf("Please enter the number: ");
    scanf("%d", &X);
    printf("X++: %d\n", X++);
    printf("++X: %d\n", ++X);
    printf("X--: %d\n", X--);
    printf("--X: %d\n", --X);
}