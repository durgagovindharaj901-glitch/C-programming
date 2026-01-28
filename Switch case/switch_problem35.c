#include<stdio.h>
int main(){
    int fuelType , litres , quantity;
    scanf("%d %d",&fuelType , &litres);

    switch(fuelType){
        case 1:
           quantity = litres * 105;
           printf("Fuel Cost %d",quantity);
           break;
        case 2:
           quantity = litres * 92;
           printf("Fuel Cost %d",quantity);
           break;
        case 3:
           quantity = litres * 85;
           printf("Fuel Cost %d",quantity);
           break;
    }
}