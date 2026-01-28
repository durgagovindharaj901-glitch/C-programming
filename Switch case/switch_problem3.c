#include<stdio.h>
int main(){
    int account_type , balance , Withdraw_amt;
    scanf("%d\n%d\n%d",&account_type,&balance,&Withdraw_amt);

    switch(account_type){
         case 1:
            if(balance>=Withdraw_amt){
                printf("Transaction Successful");
            }
            break;
        case 2:
            if(Withdraw_amt > 5000){
                printf("Limit Exceeded");
            }
        break;

    }
}