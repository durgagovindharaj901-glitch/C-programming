#include<stdio.h>
int digits(int n){
    int count = 0;
    int digit = 0;
    for(int i = 0;i<n;i++){
        if(digit >= '0' && digit <= '9'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    digits(n);
    return 0;
}