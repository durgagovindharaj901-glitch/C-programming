#include <stdio.h>
#include <stdlib.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &a[i][j]);

    int sums[R];
    for (int i = 0; i < R; i++) {
        sums[i] = 0;
        for (int j = 0; j < C; j++) sums[i] += a[i][j];
    }

    int maxDiff = 0;
    for (int i = 0; i < R; i++) {
        for (int j = i+1; j < R; j++) {
            int diff = abs(sums[i] - sums[j]);
            if (diff > maxDiff) maxDiff = diff;
        }
    }
    printf("%d\n", maxDiff);
    return 0;
}