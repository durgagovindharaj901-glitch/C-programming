#include<stdio.h>
int main(){
    for(int i = 4 ;i>=0;i--){ // i =4 4>0 T
        for(int k = i; k < 4;k++){
            printf(" ");
        }for(int j = 0;j <= 2*i;j++){ // 1<= 8 T
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}