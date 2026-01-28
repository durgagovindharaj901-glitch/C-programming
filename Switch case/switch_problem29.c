#include<stdio.h>
int main(){
    int vehicleType , distance , price;
    scanf("%d %d",&vehicleType , &distance);

    switch(vehicleType){
        case 1:
           price = distance * 10;
           printf("%d",price);
           break;
        case 2:
           price = distance * 15;
           printf("%d",price);
           break;
        case 3:
           price = distance * 20;
           printf("%d",price);
           break;
    }
}