/*Given an integer n and a threshold k, for each number i from 1 to n, find the maximum value of logical AND,
logical OR and logical XOR when compaired against all intgers through n that are greater than i. Consider the value only if
the comparison returns a result less than k.*/

#include <stdio.h>

void calculate_the_maximum(int n, int k);

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

void calculate_the_maximum(int n, int k) {
  
  int x[n];
  int aANDb = 0, aORb = 0, aXORb = 0;
  for (int i = 0, j = n - 1; i < n; i++, j--) {
    x[i] = n - j;
  }
  for (int i = 0; i < n; i++) {
    for(int l = i + 1; l < n; l++) {
        int a = x[i], b = x[l];
        if ((a & b) < k) {
            if ((a & b) > aANDb) {
                aANDb = a & b;
            }
        }
        if ((a | b) < k) {
            if ((a | b) > aORb) {
                aORb = a | b;
            }
        }
        if ((a ^ b) < k) {
            if ((a ^ b) > aXORb) {
                aXORb = a ^ b;
            }
        }
    }
  }
  printf("%d\n%d\n%d", aANDb, aORb, aXORb);
}
