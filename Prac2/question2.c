//Take input of 3 integer numbers and print the sum of them

#include <stdio.h>

int main (void) {
    int num0, num1, num2;
    printf("First number : ");
    scanf("%d", &num0);
    printf("Second number: ");
    scanf("%d", &num1);
    printf("Third number : ");
    scanf("%d", &num2);
    printf("Sum = %d", num0 + num1 + num2);
}