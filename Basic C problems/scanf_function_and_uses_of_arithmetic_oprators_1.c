/*Write a C program where you will declare an integer and a floating point variable, input
them using scanf, and print these values.*/
#include <stdio.h>

int main (void) {
    int a;
    float b;
    scanf("%d", &a);
    scanf("%f", &b);
    printf("Integer value = %d\nFloating point value = %.3f", a, b);
}