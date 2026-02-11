#include<stdio.h>
int divisible(int n){
    int prime = 1;
    for(int i = 2; i*i <n;i++){
        if(n%i==0 && n !=1 ){
            printf("Not prime");
            break;
        }else{
            printf("Prime");
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    divisible(n);
    return 0;
}