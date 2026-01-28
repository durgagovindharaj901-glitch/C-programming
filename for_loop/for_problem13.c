#include<stdio.h>
int main(){
    int m, n;
    scanf("%d %d",&n,&m);
    int sum = 0;
    for(int i = n;i<=m;i++){
        if(i%n==0){
            sum = sum + i;
        }
    }
    printf("%d",sum);
}