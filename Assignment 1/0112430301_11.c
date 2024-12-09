/*Program that will declare a variable from each data type: unsigned int, unsigned long int,
unsigned long long int, unsigned short int. Then it will initialize them with values and print
them.*/ 

#include <stdio.h>

void commaAdder (unsigned short int num); //done in order to match the sample output but has not been specified in the question

int main (void) {
    unsigned int a;
    unsigned long int b;
    unsigned long long int c;
    unsigned short int d;
    a = 4294967295;
    b = 4294967295;
    c = 18446744073709551615ULL; // ULL is added to specify a unsigned long long value and avoid overflow
    d = 65535;
    printf("The unsigned int value: %u\nThe unsigned long int value: %lu\nThe unsigned long long int value: %llu\n", a, b, c);
    commaAdder(d);
}

void commaAdder (unsigned short int num) {
    if (num < 1000) {
        printf("he unsigned short int value: %hu", num);
    } else {
        commaAdder(num / 1000);
        printf(",%03hu", num % 1000);
    }
}