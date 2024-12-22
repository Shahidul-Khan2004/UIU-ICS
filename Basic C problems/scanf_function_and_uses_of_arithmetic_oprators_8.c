/*Write a C program which will calculate the displacement of a moving body by using the
following equation:
                    s = ut + 1/2 at^2
You have to take as input u, a and t in order. Have you faced any problem regarding the
output?*/

#include <stdio.h>
#include <math.h>

int main (void) {
    float s, u, a, t;
    scanf("%f", &u);
    scanf("%f", &a);
    scanf("%f", &t);

    s = u * t + 0.5 * a * pow(t, 2);

    printf("s = %.0f", s);
}