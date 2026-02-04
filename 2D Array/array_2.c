#include<stdio.h>
int main(){
    int row;
    int col;
    scanf("%d\n",&row);
    scanf("%d",&col);
    int arr[row][col];
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max1 = arr[0][0];
    int max2 = -1;
    int max3 = arr[0][0];
    int max4 = -1;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            int value = arr[i][j];
            if(value > 0){
                if(value>max1){
                    max2 = max1;
                    max1 = value;
                }
                else if(value >max2 && value < max1){
                    max2 = value;
                }
            }
            
            if(value < 0){
                if(value > max3){
                    max4 = max3;
                    max3 = value;
                }
                else if(value > max4 && value < max3){
                    max4 = value;
                }
            }
        }
    }
    int large = max1*max2;
    int small = max3*max4;
    if(large>small){
        printf("%d",large);
    }else{
        printf("%d",small);
    }
    return 0;
}