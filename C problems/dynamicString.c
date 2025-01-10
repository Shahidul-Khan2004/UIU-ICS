#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    char *str = NULL;
    int n;
    printf("enter the approzimate size of your string: ");
    scanf("%d", &n);
    getchar();
    str = (char*) malloc((n + 1) * sizeof(char));
    printf("Please enter a string: ");
    fgets(str, n + 1, stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("%s", str);
}