#include<stdio.h>
int main(){
    int marks , attendance;
    scanf("%d\n%d",&marks,&attendance);
    if(attendance>=75){
        if(marks >=75){
            printf("Distinction");
        }else if(marks >50 && marks <74){
            printf("Pass");
        }
    }else{
        printf("Fail");
    }
}