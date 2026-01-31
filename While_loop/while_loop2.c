#include<stdio.h>
int main(){
    int n , init_bal;
    scanf("%d",&n);
    scanf("%d",&init_bal);
    int i = 1;
    int count = 0;
    int days = 0;
    int bal = init_bal;
    while(i< n){
        int amt;
        scanf("%d",&amt);
        bal = bal + amt;
        if(bal < 2000){
            days++;
        }
        i++;
    }
    printf("Final balance: %d",bal);
    printf("Low balance days: %d",days);
    return 0;
}