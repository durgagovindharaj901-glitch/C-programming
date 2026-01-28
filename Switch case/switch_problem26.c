#include<stdio.h>
int main(){
    int delayDays , days;
    scanf("%d",&delayDays);

    switch(delayDays){
        case 1: case 2:case 3: case 4: case 5:
           days = delayDays * 50;
           printf("%d",days);
           break;
        case 6:case 7: case 8: case 9:case 10:
           days = delayDays * 100;
           printf("%d",days);
           break;
        case 11:case 12:
           days = delayDays * 200;
           printf("%d",days);
           break;
    }
}