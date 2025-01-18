/*Program that will read from the console a random positive nonzero number and determine
if it is a power of 2.*/
#include <stdio.h>
#include <math.h>

int main (void)  {
    int num;
    printf("enter the positive nonzero num: ");
    scanf("%d", &num);
    if (num > 0)
    {
        if (ceil(log2(num)) == floor(log2(num)))
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        
    }
    else
    {
        printf("Not a valid number.");
    }
}