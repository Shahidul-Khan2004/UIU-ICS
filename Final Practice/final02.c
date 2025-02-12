#include <stdio.h>
#include <math.h>

int main (void) {
    float x, y, result;
    scanf("%f %f", &x, &y);
    if (x < 0 && y < 0)
    {
        result = pow(x, 3) + 5 * x * y;
        printf("%f", result);
    }
    else if (x < 0 && y > 0)
    {
        result = 4 * y;
        printf("%f", result);
    }
    else if (x >= 0)
    {
        result = 1 / (x + y);
        printf("%f", result);
    }
    else
    {
        printf("Undefined");
    }
}