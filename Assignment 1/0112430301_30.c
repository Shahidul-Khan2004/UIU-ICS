//Program to find size of int, float, double and char of the system.

#include <stdio.h>

int main (void) {
    printf("Size of int in byte(s) = %d\nSize of float in byte(s) = %d\nSize of double in byte(s) = %d\nSize of char in byte(s) = %d", sizeof(int), sizeof(float), sizeof(double), sizeof(char));
}