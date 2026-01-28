#include<stdio.h>
int main(){
    int plan_Type;
    int pay_Mode;
    scanf("%d",&plan_Type);
    scanf("%d",&pay_Mode);

    switch(plan_Type){
        case 1:
            if(pay_Mode == 11 || pay_Mode == 12 ){
                int payment = 199-20;
                printf("%d",payment);
            }
            else{
                printf("199");
            }
            break;
        case 2:
            if(pay_Mode == 11 || pay_Mode == 12){
                int payment = 399-20;
                printf("%d",payment);
            }
            else{
                printf("399");
            }
            break;
        default:
        printf("Invalid Input");
    }
}