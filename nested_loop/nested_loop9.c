#include<stdio.h>
int main(){
    for(int i = 0; i <= 4 ;i++){
        for(int k = 1; k <= 4-i;k++){
            printf(" ");
        }
        for(int j = 1;j <=2*i+1;j++){
            printf("*",j);
        }
        printf("\n");
    }
    for(int i = 4 ;i>=0;i--){ // i =4 4>0 T
        for(int k = i; k < 4;k++){
            printf(" ");
        }
        for(int j = 0;j <= 2*i;j++){ // 1<= 8 T
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}  
    