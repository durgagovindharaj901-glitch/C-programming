#include<stdio.h>
int main(){
    int category , age;
    scanf("%d\n%d",&category,&age);

    switch(category){
        case 1 :
           if(age <= 5){
            printf("1500");
           }else if(age > 5){
            printf("2500");
           }
           break;
        case 2:
           if(age <= 5){
            printf("4000");
           }else if(age > 5){
            printf("6000");
           }
           break;
    }
}