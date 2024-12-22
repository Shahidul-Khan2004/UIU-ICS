/*Write a C program which will take as input the height of an object in inches, and
represent it in feet-inch format.*/
#include <stdio.h>

int main (void) {
    int h;
    scanf("%d", &h);
    printf("%d feet %d inch", h / 12, h % 12);
}