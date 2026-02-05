#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &a[i][j]);

    int count = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int val = a[i][j];
            int rowMin = 1, colMax = 1;
            for (int k = 0; k < C; k++)
                if (a[i][k] < val) { rowMin = 0; break; }
            for (int k = 0; k < R; k++)
                if (a[k][j] > val) { colMax = 0; break; }
            if (rowMin && colMax) count++;
        }
    }
    printf("%d\n", count);
    return 0;
}