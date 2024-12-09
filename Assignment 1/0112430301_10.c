/*. Program that will declare a variable from each data type: long int, long long int, long double, 
short int. Then it will initialize them with values and print them.*/

/*Caution: the output of may vary depending on your system's architecture. 
Because long double is stored differently in different operating systems (64bit/32bit x86/arm). 
Linux is the safest bet as it offers IEEE 754 Floating-Point Standard Support.
run the code in [programiz online compiler](https://www.programiz.com/c-programming/online-compiler/)
to check the code in Linux avoid such variability.*/

#include <stdio.h>

int main (void) {
    long int a;
    long long int b;
    long double c;
    short int d;
    a = 2147483647;
    b = 9223372036854775807;
    c = (long double)1.1E+4932L; //done to convert the scientefic value from the sample and assing it to a long double type variable
    //The extra L towards the end was used to avoid storing the value as INF (infinity)
    d = 32767;
    printf("The long int value: %ld\nThe long long int value: %lld\nThe long double value: %.1Le\nThe short int value: %hd", a, b, c, d);
    //had to use %.1Le instead of %Lf and print in the scientefic format to match the sample output.
}