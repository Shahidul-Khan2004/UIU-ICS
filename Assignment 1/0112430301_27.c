/*Program that will take calculate the roots of a quadratic equation (a.x2 + b.x + c = 0) from the
formula, (here, dot (.) stands for multiplication) -
    𝐫𝐨𝐨𝐭 = {-b ± sqrt(b^2 - 4.a.c)} / 2.a */

#include <stdio.h>
#include <math.h>

int main (void) {
    float a, b, c, root1, root2;
    printf("Please enter a: ");
    scanf("%f", &a);
    printf("Please enter b: ");
    scanf("%f", &b);
    printf("Please enter c: ");
    scanf("%f", &c);
    root1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    root2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    (pow(b, 2) - 4 * a * c) < 0 ? printf("Imaginary") : printf("%.2f %.2f", root1, root2);
}