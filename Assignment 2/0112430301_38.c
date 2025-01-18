/*Program that will take two numbers X & Y as inputs and decide whether X is greater
than/less than/equal to Y.*/
#include <stdio.h>

int main (void) {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    }
    else if (num1 == num2)
    {
        printf("%d is equal to %d", num1, num2);
    }
    else
    {
        printf("%d is less than %d", num1, num2);
    }
    
}