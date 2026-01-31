#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 0;
    int count  = 1;
    while(i<n){
        int status;
        scanf("%d",&status);
        if(status == 0){
            count++;
        }else{
            count--;
        }
        i++;
    }
    printf("Longest Failure Streak : %d",count);
}