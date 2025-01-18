/*Program that will evaluate simple expressions of the form-
<number1> <operator> <number2>
where operators are (+, - , *, /)
And if the operator is “/”, then check if <number2> nonzero or not.*/
#include <stdio.h>

int main (void) {
    float num1, num2;
    char sign;
    scanf("%f %c %f", &num1, &sign, &num2);
    if (sign == '+')
    {
        printf("Addition: %f", num1 + num2);
    }
    else if (sign == '-')
    {
        printf("Substraction: %f", num1 - num2);
    }
    else if (sign == '*')
    {
        printf("Multiplication: %f", num1 * num2);
    }
    else
    {
        if (num2 == 0)
        {
            printf("Division: Zero as divisor is not valid!");
        }
        else
        {
            printf("Division: %f", num1 / num2);
        }
    }
}