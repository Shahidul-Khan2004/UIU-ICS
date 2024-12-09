/*Program that will evaluate the following equations -
    X = a - b / 3 + c * 2 - 1
    Y = a - ( b / ( 3 + c ) * 2) - 1
    Z = a - ( ( b / 3) + c * 2) - 1*/

#include <stdio.h>

int main (void) {
    int a, b, c, X, Y, Z;
    printf("Please enter a: ");
    scanf("%d", &a);
    printf("Please enter b: ");
    scanf("%d", &b);
    printf("Please enter c: ");
    scanf("%d", &c);
    X = a - b / 3 + c * 2 - 1;
    Y = a - ( b / ( 3 + c ) * 2) - 1;
    Z = a - ( ( b / 3) + c * 2) - 1;
    printf("X = %d\nY = %d\nZ = %d", X, Y, Z);
}