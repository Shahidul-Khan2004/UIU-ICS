/*Write a program that performs various mathematical operations based on user input. The
program takes a character input ('A' or ‘a’ , 'B' or 'b', 'C' or 'c') representing a specific case,
along with three numbers (x, y, z). Depending on the selected case, the program computes
different mathematical expressions and outputs the result.*/

#include <stdio.h>
#include <math.h>

int main (void) {
    char choice;
    float x, y, z;
    printf("Enter Case (A, B or C): \n");
    scanf("%c", &choice);
    if (choice == 'a' || choice == 'A')
    {   
        printf("Enter three numbers: ");
        scanf("%f %f %f", &x, &y, &z);
        printf("Output: %.2f", sqrt(x) + pow(y, 4) + 6 * z);
    }
    else if (choice == 'b' || choice == 'B')
    {
        printf("Enter three numbers: ");
        scanf("%f %f %f", &x, &y, &z);    
        printf("Output: %.2f", (int) x % (int) y / z);
    }
    else if (choice == 'c' || choice == 'C')
    {
        printf("Enter three numbers: ");
        scanf("%f %f %f", &x, &y, &z);
        printf("Output: %c %c %c", (int) x, (int) y, (int) z);
    }
    else
    {
        printf("Wrong Input");
    }
}