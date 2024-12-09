//Program that will multiply and divide a number X by Y. (Use *= and /= operators)

#include <stdio.h>

int main (void) {
    int X, Y;
    printf("Enter the value: ");
    scanf("%d", &X);
    printf("Increment/Decrement the vlue by: ");
    scanf("%d", &Y);

    printf("Incremented Value: %d\n", X *= Y);
    
    printf("Decremented Value: %d\n", X /= (Y * Y));
}