#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    char *str = NULL;
    char buffer[16];
    printf("Please enter a string: ");

    while (fgets(buffer, sizeof(buffer), stdin))
    {
        size_t chunk = strlen(buffer);

        char *temp = realloc(str, chunk);
    }
    
}