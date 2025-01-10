#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    char *str = NULL;
    size_t n = 10;
    size_t length = 0;
    char *buffer = (char *) malloc ((n + 1) * sizeof(char));
    printf("Please enter a string: ");
    while(fgets(buffer, n + 1, stdin)) {
        str = realloc(str, length + n + 1);
        strcpy(str + length, buffer);
        length += n;
        size_t chunk_length = strlen(buffer);
        if (chunk_length > 0 && buffer[chunk_length - 1] == '\n')
        {
            break;
        }
    }
    str[strcspn(str, "\n")] = '\0';
    printf("%s", str);
    free(str);
    free(buffer);
}