#include<stdio.h>
int main(){
    int class , weight;
    scanf("%d\n%d",&class,&weight);

    switch(class){
        case 1 :
           weight = weight *300;
           printf("Extra Baggage Charge %d",weight);
           break;
        case 2:
            if(weight <= 3){
                printf("Free");
            }else {
                weight = weight * 300;
                printf("Extra Baggage Charge %d",weight);
            }
            break;   
        }
}