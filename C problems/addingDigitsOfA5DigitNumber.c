#include <stdio.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1, j = 10, k = 1, num[6]; i < 6; i++, j *= 10, k *= 10) {
        num[0] = 0;
        num[i] = (n % j) - (n % k);
        num[i] = num[i] / k;
        sum += num[i];
    }
    printf("%d", sum);
    return 0;
}