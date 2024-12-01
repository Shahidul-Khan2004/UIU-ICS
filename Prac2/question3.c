#include <stdio.h>

int main (void) {
    int num0, num1;
    printf("First number : ");
    scanf("%d", &num0);
    printf("Second number: ");
    scanf("%d", &num1);
    printf("Sum = %d\n", num0 + num1);
    printf("Substraction = %d\n", num0 - num1);
    printf("Multiplication = %d\n", num0 * num1);
}