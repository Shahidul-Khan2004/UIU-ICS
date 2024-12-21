/*Write a C program where you will declare two integer variables, input them using scanf,
and perform the basic arithmetic operations on them.*/
#include <stdio.h>

int main (void) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n%d %% %d = %d", a, b, a + b, a, b, a - b, a, b, a * b, a, b, a / b, a, b, a % b);
}