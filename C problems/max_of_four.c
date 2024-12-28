#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    int max;
    int y[4] = {0, 0, 0, 0};
    int x[4] = {a, b, c, d};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (x[i] >= x[j]) {
                y[i]++;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        if (y[i] == 4) {
            max = x[i];
        }
    }
    return max;
}
