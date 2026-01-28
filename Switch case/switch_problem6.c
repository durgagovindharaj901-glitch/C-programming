#include<stdio.h>
int main(){
    int orderAmt;
    int speedType;
    scanf("%d",&orderAmt);
    scanf("%d",&speedType);

    switch(speedType){
        case 1: 
            printf("Delivery Rs.50");
            break;
        case 2:
            if(orderAmt < 1000){
                printf("Delivery Rs.100");
            }else{
                printf("Free");
            }
            break;
        
    }
}