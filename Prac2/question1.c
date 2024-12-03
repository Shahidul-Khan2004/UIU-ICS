//Take input of an integer number and print it

#include <stdio.h>

int main (void) {
    int num;
    printf("Type an integer number: ");
    if(scanf("%d", &num) != 1) {
        printf("this is not an integer number");
        return 1;
    }
    printf("%d", num);
}