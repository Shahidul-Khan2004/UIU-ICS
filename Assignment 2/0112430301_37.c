/* Program that will read from the console a random number and check if it is a nonzero
positive number. If the check is yes,it will determine if the number is a power of 2.
If the check fails the program will check for two more cases. If the number is zero,the
program will print “Zero is not a valid input”. Else it will print “Negative input is not valid”.*/
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
        
    } else if (num == 0) {
        
        printf("Zero is not a valid input");

    } else {

        printf("Negative input is not valid");

    }
}