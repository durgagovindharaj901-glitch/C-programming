#include<stdio.h>
int main(){
    int loanType , creditScore;
    scanf("%d\n%d",&loanType,&creditScore);

    switch(loanType){
        case 1:
           if(creditScore >= 700){
            printf("Approved");
           }else{
            printf("Manual Review");
           }
           break;
        case 2:
           if(creditScore >= 700){
            printf("Approved");
           }else{
            printf("Rejected");
           }
           break;
    }
    
}