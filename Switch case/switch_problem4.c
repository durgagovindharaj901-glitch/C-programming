#include<stdio.h>
int main(){
    int class , age;
    int discount;
    scanf("%d\n%d",&class,&age);
    switch(class){
        case 1:
            if(age<12){
                discount = 300-(300*0.5);
                printf("Fare %d",discount);
            }
            else{
                discount = 300-(300*0.33)-1;
                printf("Fare %d",discount);
            }
            break;
        case 2:
            if(age<12){
                discount = 1000-(1000*0.5);
                printf("Fare %d",discount);
            }
            break;
        default:
            printf("Invalid Input");      
    }

}