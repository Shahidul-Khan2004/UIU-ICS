#include <stdio.h>

int main (void) { 
    float a, b, h, choice, t, s;
    printf("Choice: ");
    scanf("%f", &choice);
    if (choice == 1) {
        scanf("%f %f", &b, &h);
        t = 0.5 * b * h;
        printf("Area of the triangle is: %f square units", t);
    }
    else if (choice == 2) {
        scanf("%f", &a);
        s = a * a;
        printf("Area of the square is: %f square units", s);
    }
    else {
        printf("invalid");
    }
}