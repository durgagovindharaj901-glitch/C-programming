#include<stdio.h>

int large_num(int a, int b){
    if(a>b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}
int main(){
    int a , b;
    scanf("%d\n%d",&a,&b);
    large_num(a,b);
    return 0;
}