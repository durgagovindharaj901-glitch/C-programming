#include<stdio.h>
int main(){
    int r,c;
    scanf("%d\n%d",&r,&c);
    int arr[r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sums[c];
    int maxDiff = 1;
    for (int i = 0; i < r; i++) {
        for (int j = i; j < c; j++) {
            sums[j] = 0;
            sums[j] = sums[j] + arr[i][j];
            int diff = sums[j] - sums[i];
            if (diff > maxDiff) {
                maxDiff = diff;
            }
        }
    }
    printf("%d\n", maxDiff);
    return 0;

}