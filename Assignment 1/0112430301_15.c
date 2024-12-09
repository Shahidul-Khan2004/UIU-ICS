/*Program that will take an floating point number as input from the keyboard and use printf
function to perform the followings:

    (a) Print the number right justified within 10 columns
    (b) Print the number to be right justified to 2 columns (Assuming the input has more
    than 2 digits)
    (c) Print the number rounded to two decimal places
    (d) Print the number rounded to integer (without using conversion or type casting)
    (e) Prints the number in exponential notation/scientific notation*/

#include <stdio.h>

int main (void) {
    float num;
    printf("Please enter a floating value: ");
    scanf(" %f", &num);
    printf("(a) Val:%10f\n", num); //proper answer of (a) but doesn't match sample output
    printf("(a) Val:%16f\n", num); //donte to match the sample output
    printf("(b) Val:%2f\n", num);
    printf("(c) Val:%.2f\n", num);
    printf("(d) Val:%.0f\n", num);
    printf("(e) Val:%e\n", num);
}