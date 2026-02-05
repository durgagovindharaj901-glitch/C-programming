#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &a[i][j]);

    int minIndex = 0;
    double minAvg = 1e9;
    for (int i = 0; i < R; i++) {
        int sum = 0;
        for (int j = 0; j < C; j++) sum += a[i][j];
        double avg = (double)sum / C;
        if (avg < minAvg) {
            minAvg = avg;
            minIndex = i;
        }
    }
    printf("%d\n", minIndex);
    return 0;
}