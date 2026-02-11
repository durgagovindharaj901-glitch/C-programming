#include<stdio.h>
int table(int n){
    for(int i = 1; i <= 10;i++){
        printf("%d ",i*n); 
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    table(n);
    return 0;
}