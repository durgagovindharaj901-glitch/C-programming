#include<stdio.h>
int main(){
    char n ;
    for(int i = 1; i<5;i++){
        for(int j = 1;j <=i;j++){
            printf(" ");
        }
        n = 'A';
        for(int k=1 ; k<=i;k++){
            printf("%c",n++);
        }
        n =n-2;
        for(int j = 1;j<i;j++){
            printf("%c",n--);
        }
        
    } printf("\n"); 
      
}