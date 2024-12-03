/*Take input of 5 integer numbers , calculate their average and
print the average result*/

#include <stdio.h>

int main (void) {
    int num0, num1, num2, num3, num4;
    printf("First number : ");
    scanf("%d", &num0);
    printf("Second number: ");
    scanf("%d", &num1);
    printf("Third number : ");
    scanf("%d", &num2);
    printf("Fourth number: ");
    scanf("%d", &num3);
    printf("Fifth number : ");
    scanf("%d", &num4);
    float avg = (num0 + num1 + num2 + num3 + num4) / 5.0;
    printf("Average = %f", avg);
}