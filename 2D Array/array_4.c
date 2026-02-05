#include<stdio.h>
int main(){
    int r;
    int c;
    int arr[r][c];
    for(int i = 0; i< r ;i++){
        for(int j = 0; j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int current = arr[i][j];
            for (int x = i; x < r; x++) {
                for (int y = (x == i ? j+1 : 0); y < c; y++) {
                    if (arr[x][y] == current) {
                        printf("%d\n", current);
                    }
                }
            }
        }
    }
    printf("-1\n");
    return 0;
}