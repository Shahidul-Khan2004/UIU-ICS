//Program that will decide whether a year is leap year or not
#include <stdio.h>

int main (void) {
    int year;
    printf("enter the Year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0 ) || ( year % 400 ==0 )) {
        printf("Yes");
    } else {
        printf("No");
    }
}