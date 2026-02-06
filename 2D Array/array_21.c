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
    int row_index = 0;
    for(int i = 0; i<r;i++){\
        for(int j = 0;j<c;j++){
            if((arr[i][j]%2 == 0)&&(arr[i][j+1]%2 !=0)){
                row_index = i;
            }
        }
    }
    printf("%d",row_index);
}