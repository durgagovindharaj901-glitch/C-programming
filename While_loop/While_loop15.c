#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 0;
    int count = 0;
    int sum = 0;
    while(i<n){
        int hr;
        scanf("%d",hr);
        if(hr>4){
            count++;
            sum++;
        }
        i++;
    }
    printf("Total Overtime : %d",sum);
    printf("Burnout Days:%d",count);
    return 0;
}