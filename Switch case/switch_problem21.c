#include<stdio.h>
int main(){
    int sealType,showTime , price;
    scanf("%d %d",&sealType,&showTime);

    switch(sealType){
        case 1:
           if(showTime>=18){
            price = 150 + 50;
            printf("Ticket price %d",price);
           }else{
            printf("Ticket Price 150");
           }
           break;
        case 2:
           if(showTime>=18){
            price = 250 + 50;
            printf("Ticket price %d",price);
           }else{
            printf("Ticket Price 250");
           }
           break;
    }
}