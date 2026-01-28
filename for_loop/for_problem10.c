#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int first = 0;
    int second = 1;
    for(int i = 1;i <= n;i++){
        printf("",first);
        int temp = first;
        first = first + second;
        second = temp;
        printf("%d ",temp);
    }
    
}