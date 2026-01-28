#include<stdio.h>
int main(){
    int category, distance;
    scanf("%d\n%d",&category,&distance);

    switch(category){
        case 1:
           if(distance <= 30){
            printf("Eligible");
           }else{
            printf("Eligible with extra fee");
           }
           break;
        case 2:
            if(distance <= 30){
                printf("Eligible");
            }
        case 3:
            if(distance==30){
                printf("Not Eligible");
            }
            break;
    }
}