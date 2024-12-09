/*Program that will receive the values of an integer, a floating point number, a character from 
the keyboard and print those values.*/

#include <stdio.h>

int main (void) {
    int integer;
    float fractional;
    char character;
    printf("Please enter an integer  : ");
    scanf("%d", &integer);
    printf("Please enter an float    : ");
    scanf("%f", &fractional);
    printf("Please enter an character: ");
    scanf(" %c", &character);
    printf("The integer value: %d\nThe floating point value: %f\nThe character value: %c", integer, fractional, character);
}