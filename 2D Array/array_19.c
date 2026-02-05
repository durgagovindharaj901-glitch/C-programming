#include<stdio.h>
int main(){
    int r, c;
    scanf("%d\n%d",&r,&c);
    int arr[r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max_diff = 0;
    for(int i = 0; i<r;i++){
        for(int j = 0; j <c;j++){
            for(int k = i;k<r;k++){
                for(int l = 0;l<c;l++){
                    int diff = arr[i][j] - arr[k][l];
                    if(diff>max_diff){
                        max_diff = diff;
                    }
                }
            }
        }
    }
    printf("%d",max_diff);
    return 0;
}