#include<stdio.h>
int main(){
    int r,c;
    scanf("%d\n%d",&r,&c);
    int a[r][c];
    for(int i = 0; i<r;i++){
        for(int j = 0; j < c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int count = -1;
    for(int i = 0; i< r;i++){
        for(int j = 0;j<c;j++){
            if(a[i][j] < a[i][j+1]){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}