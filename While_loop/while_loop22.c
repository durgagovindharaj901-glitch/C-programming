#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    int count = 0;
    int cons = 0;
    int attempt;
    while(i<n){
        int lock;
        scanf("%d",&lock);
        if(i == 0){
            count++;
        }
        i++;
    }
    printf("Lock Triggered at attemp:%d\n",attempt);
    printf("Total Failed Attempts:%d",count);
}