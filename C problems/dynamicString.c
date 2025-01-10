#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    char *str = NULL;
    char buffer[16];
    printf("Please enter a string: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("%s", buffer);
}