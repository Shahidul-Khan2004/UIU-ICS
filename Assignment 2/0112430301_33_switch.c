//Program that will decide whether a number is even or odd

#include <stdio.h>

int main()
{
    int num;
    printf("enter the num: ");
    scanf("%d", &num);
    switch(num % 2 == 0)
    {
        case 0:
            printf("Odd");
            break;
        case 1:
            printf("Even");
            break;
    }
}