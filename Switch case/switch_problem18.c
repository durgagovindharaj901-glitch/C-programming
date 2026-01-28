#include<stdio.h>
int main(){
    int marks ,attempt;
    scanf("%d\n%d",&marks,&attempt);

    switch(attempt){
        case 1 :
           if(marks >= 80){
            printf("Excellent");
           }
           break;
        case 2 :
            if(marks >= 60){
                printf("Good");
            }
            break;
        case 3:
            if(marks < 60){
                printf("Need Improvement");
            }
            break;
    }
}