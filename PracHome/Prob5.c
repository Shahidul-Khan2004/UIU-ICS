/*Let’s try to divide one integer number by another (i.e 27/5) and try to
store the result in a float variable.*/

#include <stdio.h>

int main (void) {
    
    int a, b;

    printf("Enter your first number (divident): ");
    scanf("%d", &a);
    printf("Enter your second number (divisor): ");
    scanf("%d", &b);
    float result = ((float) a / b);
    printf("Res (quotient) of %d / %d is: %.2f", a, b, result);
}