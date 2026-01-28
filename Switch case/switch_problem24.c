#include<stdio.h>
int main(){
    int callType , mins , amount;
    scanf("%d %d",&callType , &mins);

    switch(callType){
        case 1:
           amount = mins*1;
           printf("%d",amount);
           break;
        case 2:
           amount = mins*3;
           printf("%d",amount);
           break;
        case 3:
           amount = mins*10;
           printf("%d",amount);
           break;
    }
}