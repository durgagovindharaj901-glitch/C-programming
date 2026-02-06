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
    int count = 1;
    for(int i = 0; i<r;i++){
        int unique = 1;
        for(int j = 0; j<c;j++){
            for(int k = j+1;k<c;k++){
                if(arr[i][j] == arr[j][i]){
                    unique = 0;
                    break;
                }
            }
            
        }if(unique){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}