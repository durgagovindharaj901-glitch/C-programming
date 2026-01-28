#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fact = 1;
    for(int i = 1;i <= n;i++){ // i=3 2<= 5 
        fact = fact * i;  // fact = 2 * 3
    }
    printf("%d",fact);
    
}