#include<stdio.h>
int main(){
    int r, c;
    scanf("%d\n%d",&r,&c);
    int arr[r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0; j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int prime = 1;
    int count = 1;
    for(int i = 2;i*i<r;i++){
        for(int j = 0; j< c;j++){
            if( arr[i][j] % i == 0);{
                prime = 0;
                count++;
                break;
                
            }
        }
    }
    printf("%d",count);
}