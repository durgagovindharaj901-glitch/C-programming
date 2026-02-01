#include<stdio.h>
int main(){
    int maxweight, n;
    scanf("%d\n%d",&maxweight , &n);
    int i=0;
    int rem = 0;
    int sum = 0;
    while(i<n){
        int wgt;
        scanf("%d",&wgt);
        rem = maxweight /100;
        i++;
        sum++;
    }
    printf("People Entered : %d\n",rem);
    if(sum > maxweight){
        printf("Overload Status : YES");
    }else{
        printf("Overload Status : NO");
    }


}