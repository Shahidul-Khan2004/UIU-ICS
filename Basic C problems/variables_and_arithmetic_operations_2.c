/*Write a C program where you will declare two integer variables, initialize them by values
of your choice, and perform the basic arithmetic operations on them. The basic arithmetic
operations are addition (+), subtraction (-), multiplication (*), division (/) and remainder
(%).*/
#include <stdio.h>

int main (void) {
    int a = 18, b = 7;
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n%d %% %d = %d", a, b, a + b, a, b, a - b, a, b, a * b, a, b, a / b, a, b, a % b);
}