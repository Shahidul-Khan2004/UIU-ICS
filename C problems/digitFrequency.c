#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = (char *) malloc(1064 * sizeof(char));
    scanf("%s", s);
    s = (char *) realloc(s, strlen(s) + 1);
    
    int arr[10] = {0};
    
    for (int i = 0, len = strlen(s); i < len; i++) {
        switch (*(s + i)) {
            case '0':
                *arr += 1;
                break;
            case '1':
                *(arr + 1) += 1;
                break;
            case '2':
                *(arr + 2) += 1;
                break;
            case '3':
                *(arr + 3) += 1;
                break;
            case '4':
                *(arr + 4) += 1;
                break;
            case '5':
                *(arr + 5) += 1;
                break;
            case '6':
                *(arr + 6) += 1;
                break;
            case '7':
                *(arr + 7) += 1;
                break;
            case '8':
                *(arr + 8) += 1;
                break;
            case '9':
                *(arr + 9) += 1;
                break;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(arr + i));
    }
    
    return 0;
}
