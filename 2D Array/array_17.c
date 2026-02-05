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
    int count = 0;
    for(int i =0;i<r;i++){
        int diag = arr[i][i];
        int sum = 0;
        for(int j=0;j,c;j++){
            if(i != j){
                sum = sum + arr[i][j];
                if(diag > sum){
                    count++;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}