#include<stdio.h>
int main(){
    int customerType , billAmt , discount;
    scanf("%d %d",&customerType , &billAmt);

    switch(customerType){
        case 1:
           discount = billAmt-(billAmt*0.05)+1;
           printf("%d",discount);
           break;
        case 2:
           discount = billAmt-(billAmt*0.15);
           printf("%d",discount);
           break;
        
    }
}