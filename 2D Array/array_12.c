#include<stdio.h>
int main(){
    int r, c;
    scanf("%d\n%d",&r,&c);
    int arr[r][c];
    for(int i = 0; i < r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int max_count = 0;
    for(int i = 0; i<r;i++){
        int count = 0;
        for(int j = 0;j<c;j++){
            if(arr[i][j] == arr[j][i]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
        }
    }
    printf("%d",max_count);
    return 0;
}