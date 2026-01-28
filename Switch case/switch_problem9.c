#include<stdio.h>
int main(){
    int roomType;
    char season;
    scanf("%d\n",&roomType);
    scanf("%c",&season);

    switch(roomType){
        case 1: 
            if(season == 'A' || season == 'a'){
                printf("2500");
            }else if(season == 'B' || season == 'b'){
                printf("2000");
            }
            break;
        case 2:
            if(season == 'C' || season == 'c'){
                printf("4000");
            }else if(season == 'D' || season == 'd'){
                printf("3000");
            }
            break;
    }
}