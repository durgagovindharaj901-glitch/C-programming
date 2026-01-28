#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(;n!=0;){
        int id = n%10;
        sum = sum + id;
        n = n/10;
    }
    printf("%d",sum);
}