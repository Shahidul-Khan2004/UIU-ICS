#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (int i = 0, len = strlen(s); i < len; i++) {
        if (*(s + i) == ' ') {
            printf("\n");
        }
        else {
            printf("%c", *(s + i));
        }
    }
    return 0;
}
