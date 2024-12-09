/*Program that will declare an integer, a floating point number, a character. Then it will *
initialize them with values and print those values.*/

#include <stdio.h>

int main (void) {
    int integer;
    float fractional;
    char character;
    integer = 5;
    fractional = 3.141593;
    character = 'a';
    printf("The integer value: %d\nThe floating point value: %f\nThe character value: %c", integer, fractional, character);
}