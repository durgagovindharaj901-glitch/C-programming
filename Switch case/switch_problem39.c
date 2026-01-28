#include<stdio.h>
int main(){
    int distance;
    scanf("%d",&distance);

    switch(distance){
        case 1:case 2:case 3:case 4:case 5:
           printf("Transport Fee 800");
           break;
        case 6:case 7:case 8: case 9:
           printf("Transport Fee 1200");
           break;
        case 10:
           printf("Transport Fee 1800");
           break;
    }
}