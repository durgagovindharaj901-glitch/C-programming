#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 0;
    int count = 0;
    while(i<n){
        int hours;
        scanf("%d",&hours);
        if(hours == 0){
            count++;
        }
        i++;
    }
    printf("Inactive weeks:%d\n",count);
    if(count > 2){
        printf("Risk Status : High");
    }else{
        printf("Risk Status : Low");
    }
    return 0;
}