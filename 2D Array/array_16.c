#include<stdio.h>
int main(){
    int r,c;
    scanf("%d\n%d",&r,&c);
    int arr[r][c];
    for(int i = 0; i<r;i++){
        for(int j = 0; j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int min_sum = 1;
    int min_row = 1;
    for(int i = 0;i<r;i++){
        int sum = 0;
        for(int j = 0; j<c;j++){
            sum = sum + arr[i][j];
            if(sum!=0 && sum <min_sum){
                min_sum = sum;
                min_row = i;
            }
        }
        printf("%d",min_row);
        return 0;
    }
}