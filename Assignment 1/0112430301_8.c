/*Program that will take three integer numbers from keyboard but assign only the first and 
last inputs to variables and skip any assignment of the middle one.*/

#include <stdio.h>

int main (void) {
    int a, b;
    printf("Please enter the first number : ");
    scanf("%d", &a);
    printf("Please enter the second number: ");
    scanf("%d");
    printf("Please enter the third number : ");
    scanf("%d", &b);
    printf("First Value = %d, Last Value = %d", a, b);
}