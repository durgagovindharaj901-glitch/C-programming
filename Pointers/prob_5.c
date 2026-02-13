#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p =  arr;
    for(int i = 0; i<n;i++){
        scanf("%d",p+i);
    }
    int sum = 0;
    for(int i = 0 ;i<n;i++){
        int digit = *(p+i);
        while(digit >0){
            sum = sum + *(p+i)%10;
            digit = *(p+i) / 10;
        }
    }
    printf("%d",sum);
    return 0;
}