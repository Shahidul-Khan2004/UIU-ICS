/*Make a Age Calculator that takes the birth year as input from
the user and tells them how old they’ll be in a particular year!*/

#include <stdio.h>

int main (void) {
    int age, birthYear, toYear;
    printf("Enter The year you were born: ");
    scanf("%d", &birthYear);
    printf("Enter the year to calculate your age in: ");
    scanf("%d", &toYear);
    age = toYear - birthYear;
    printf("You\'ll be %d years old in %d.", age, toYear);
}