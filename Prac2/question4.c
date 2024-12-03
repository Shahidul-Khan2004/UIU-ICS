//Take input of 1 integer and 1 float number. Print the sum of them

#include <stdio.h>

int main (void) {
    int num0;
    float num1;
    printf("Integer number: ");
    scanf("%d", &num0);
    printf("Float number  : ");
    scanf("%f", &num1);
    printf("Sum: %f", num0 + num1);
}