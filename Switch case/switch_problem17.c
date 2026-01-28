#include<stdio.h>
int main(){
    int vehicle, hours , fee;
    scanf("%d\n%d",&vehicle,&hours);

    switch(vehicle){
        case 1:
           fee = hours*10;
           printf("Parking Fee %d",fee);
           break;
        case 2:
           fee = hours * 20;
           printf("Parking Fee %d",fee);
           break;
    }
}