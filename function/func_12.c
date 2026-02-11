#include<stdio.h>
void leap(int year){
    if((year%4 == 0 && year%100 != 0 )||( year%400 ==0)){
        printf("LeapYear");
    }else{
        printf("Not LeapYear");
    }
}
int main(){
    int year;
    scanf("%d",&year);
    leap(year);
    return 0;
}