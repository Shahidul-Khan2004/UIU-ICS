#include <stdio.h>

int main (void) {
    char name[20];
    float salary, sales;
    scanf("%s %f %f", &name, &salary, &sales);
    printf("TOTAL = R$ %.2f\n", salary + sales * 0.15);
}