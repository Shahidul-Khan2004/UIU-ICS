/*Write a C program which will calculate the terminal velocity of a moving body by using
the following equation:
                            v = u + at
You have to take as input u, a and t in order. Can you figure out the data types for all the
variables?*/
#include <stdio.h>

int main (void) {
    float v, u, a, t;
    scanf("%f", &u);
    scanf("%f", &a);
    scanf("%f", &t);

    v = u + a * t;

    printf("v = %.0f", v);
}