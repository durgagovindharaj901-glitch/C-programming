#include<stdio.h>
int main(){
    int accType;
    int years;
    scanf("%d",&accType);
    scanf("%d",&years);

    switch(accType){
        case 1:
            printf("Interest 4%");
            break;
        case 2:
            if(years<=3){
                printf("Interest 5%");
            }else {
                printf("Interest 7%");
            }
            break;
    }
}