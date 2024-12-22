/*Write a C program which will take as input the height of an object in centimeters, and
represent it in meter-centimeter format*/

#include <stdio.h>

int main (void) {
    int h;
    scanf("%d", &h);
    printf("%d meter %d centimeter", h / 100, h % 100);
}