#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i =0;
    int sum = 0;
    int count = 0;
    while(i<n){
        int hrs;
        scanf("%d",&hrs);
        sum = sum + hrs;
        if(hrs>2){
            count++;
        }
        i++;
    }
    printf("Total Delay:%d\n",sum);
    printf("Delayed Days:%d",count);
    return 0;
}