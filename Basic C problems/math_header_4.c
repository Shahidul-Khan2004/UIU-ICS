/*Write a C program that will calculate the terminal velocity of a moving body by using the
following equation:
                        v^2 = u^2 + 2as
You have to take as input the values of u, a and s in order, and output the value of v.*/
#include <stdio.h>
#include <math.h>

int main (void) {
    float u, a, s, v;
    scanf("%f", &u);
    scanf("%f", &a);
    scanf("%f", &s);
    v = sqrt(pow(u, 2) + 2 * a * s);
    printf("v = %0.2f", v);
}