/*Write a C program where you will declare an integer, a floating point and a character
variable, initialize them by values of your choice, and print these values.*/
#include <stdio.h>

int main (void) {
    int integer = 17;
    float floatingPoint = 3.508;
    char character = 'W';
    printf("Integer value = %d\nFloating point value = %.3f\nCharacter value = %c", integer, floatingPoint, character);
}