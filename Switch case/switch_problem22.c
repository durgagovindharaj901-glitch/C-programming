#include<stdio.h>
int main(){
    int connectionType,units;
    scanf("%d %d",&connectionType,&units);

    switch(connectionType){
        case 1:
           if(units<=30){
           units = units *5;
           printf("%d",units);
           }else if (units > 30){
            units = units * 8;
           }
           break;
        case 2:
           units = units * 10;
           printf("%d",units);
           break;
    }
}