#include<stdio.h>
int natural_num(int n){
    int sum = 0;
    for(int i = 1; i<= n;i++){
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    natural_num(n);
    return 0;
}