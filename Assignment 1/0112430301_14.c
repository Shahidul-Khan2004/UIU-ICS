/*. Program that will define a global and a local variable with the same name but with different
values, and then do the following steps in order
A. Print the value of the variable before defining the local variable
B. Print the value of the variable after defining the local variable
C. Explicitly print the value of the variable as global*/

#include <stdio.h>

int a = 100;

int main (void) {
    printf("Value of the variable before defining the local variable: %d\n", a);
    int a = 10;
    printf("Value of the variable after defining the local variable : %d\n", a);
    {
        extern int a;
        printf("The value of the variable as global\t\t\t: %d\n", a);
    }
}