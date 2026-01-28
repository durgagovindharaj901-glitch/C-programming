#include<stdio.h>
int main(){
int n;
    scanf("%d",&n);
    int fact = 1;
    int result = 0;
    for(;n!=0;){
        int temp = n % 10;
        for(int i = 1;i <= n;i++){ // i=3 2<= 5 
            fact = fact * i;  // fact = 2 * 3
        }
        result = result + fact;
        n = n/10;
    }
    if(result == n){
        printf("Yes");
    }else{
        printf("No");
    }
    
}