#include<stdio.h>
int main(){
    int r;
    int c;
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];
    for(int i = 0; i< r;i++){
        for(int j = 0; j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max = -1;
    int count = 0;
    for(int i = 0;i<r;i++){
        int uni_cnt = 0;
        for(int j = 0;j<c;j++){
            int value = 1;
            for(int k =0;k<j;k++){
                if(arr[i][j] == arr[i][k]){
                    value = 0;
                    break;
                }
            }
            if(value)uni_cnt++;
        }
        if(uni_cnt > max){
            max = uni_cnt;
            count = i;
        }
    }
    printf("%d\n",count);
    return 0;
}