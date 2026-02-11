#include<stdio.h>

int check(int n){
    if(n%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    check(n);
    return 0;
}