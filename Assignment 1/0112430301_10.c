/*. Program that will declare a variable from each data type: long int, long long int, long double, 
short int. Then it will initialize them with values and print them.*/

#include <stdio.h>

int main (void) {
    long int a;
    long long int b;
    long double c;
    short int d;
    a = 2147483647;
    b = 9223372036854775807;
    c = (long double)1.1E+4932L;
    d = 32767;
    printf("The long int value: %ld\nThe long long int value: %lld\nThe long double value: %.1Le\nThe short int value: %hd", a, b, c, d);
}