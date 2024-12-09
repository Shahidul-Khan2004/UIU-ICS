/*Program that will declare and initialize an integer and a floating point number. Then it will
perform floating to integer and integer to floating conversions using
(a) Assignment operation
(b) Type casting*/

#include <stdio.h>

int main (void) {
    int a, b;
    float c, d;
    printf("Enter the integer number: ");
    scanf("%d", &a);
    printf("Enter the floating point number: ");
    scanf("%f", &c);
    d = a;
    b = c;
    printf("Assignment: %f assigned to an int produces %d\n", c, b);
    printf("Assignment: %d assigned to an int produces %f\n", a, d);
    printf("Type Casting: (float) %d produces %f\n", a, (float) a);
    printf("Type Casting: (int) %f produces %d\n", c, (int) c);
}