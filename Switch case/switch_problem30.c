#include<stdio.h>
int main(){
    int hours;
    scanf("%d",&hours);

    switch(hours){
        case 1:
           printf("Short Interruption");
           break;
        case 2:case 3:
           printf("Medium Interruption");
           break;
        case 4:case 5: case 6:
           printf("Speed 300 Mbps");
           break;
    }
}