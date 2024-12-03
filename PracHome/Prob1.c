/*Write a C program where you will declare four integer variables (say a, b, c
and d), initialize them by values of your choice, and calculate a * b + (a – c) /
d + b.*/

#include <stdio.h>

int main (void) {
    int a = 1, b = 2, c = 3, d = 4;
    int sol = a * b + (a - c);
    printf("%d", sol);
}