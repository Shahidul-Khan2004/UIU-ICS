/*. Program that will define a global and a local variable with the same name but with different
values, and then do the following steps in order
A. Print the value of the variable before defining the local variable
B. Print the value of the variable after defining the local variable
C. Explicitly print the value of the variable as global*/

#include <stdio.h>

int a = 10;

int main (void) {
    printf("A. Global: %d\n", a);
    int a = 20;
    printf("B. Local: %d\n", a);
    {
        extern int a; //gets the external (outside main function) value of a
        printf("C. Global: %d\n", a);
    }
}