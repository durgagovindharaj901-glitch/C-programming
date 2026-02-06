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
    int sum = 0;
    for(int i = 0; i<r;i++){
        sum = sum + arr[i][0];
    }
    if(r > 1){
        for(int i = 0;i<r;i++){
            sum = sum + arr[i][c-1];
        }
    }
    for(int j = 0;j<c;j++){
        sum = sum + arr[0][j];
    }
    if(c > 1){
        for(int j = 0;j<c;j++){
            sum = sum + arr[r-1][j];
        }
    }
    printf("%d",sum);
    return 0;
}