#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &a[i][j]);

    long long maxProd = -1e18;
    int maxIndex = 0;
    for (int i = 0; i < R; i++) {
        long long prod = 1;
        for (int j = 0; j < C; j++) prod *= a[i][j];
        if (prod > maxProd) {
            maxProd = prod;
            maxIndex = i;
        }
    }
    printf("%d\n", maxIndex);
    return 0;
}