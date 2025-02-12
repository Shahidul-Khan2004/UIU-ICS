#include <stdio.h>

int main (void) {
    int n;
    float a, b;
    scanf("%d %f %f", &n, &a, &b);
    switch (n) {
        case 1:
        printf("%f", a+b);
        break;
        case 2:
        printf("%f", a-b);
        break;
        case 3:
        printf("%f", a*b);
        break;
        case 4:
        switch (b == 0) {
            case 0:
            printf("%f", a/b);
            break;
            case 1:
            printf("Can not devide by 0");
        }
        break;
        default:
        printf("invalid");
    }
}