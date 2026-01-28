#include<stdio.h>
int main(){
    int vehicleType , trips;
    scanf("%d\n%d",&vehicleType,&trips);
    
    switch(vehicleType){
        case 1:
           if(trips == 1){
            printf("100");
           }else if(trips >= 2 && trips <= 10){
            printf("800");
           }else{
            printf("800");
           }
           break;
        case 2:
           if(trips == 1){
            printf("240");
           }else if(trips <=5){
            printf("%d",trips*240);
           }else{
            printf("%d",trips*240);
           }
           break;
    }
}