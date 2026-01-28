#include<stdio.h>
int main(){
    int category;
    scanf("%d",&category);

    switch(category){
        case 1:
           printf("1200");
           break;
        case 2:
           printf("800");
           break;
        case 3:
           printf("500");
           break;
    }
}