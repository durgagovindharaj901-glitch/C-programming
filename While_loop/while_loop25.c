#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int count = 0;
    while(i<n){
        int amt;
        scanf("%d",&amt);
        if(i>=50000){
            count++;
        }
        i++;
    }
    printf("Fraud Triggered at attemp:%d\n");
    printf("High-Value transcation:%d",count);
}