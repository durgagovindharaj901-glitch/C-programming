#include<stdio.h>

int area(int r){
    float result = 3.14*r*r;
    printf("%.2f",result);
    return 0;
}
int main(){
    int r;
    scanf("%d",&r);
    area(r);
    return 0;
}