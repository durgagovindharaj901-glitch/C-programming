#include<stdio.h>
int main(){
    int n, p;
    scanf("%d %d",&n,&p);
    int res = 1;
    if(p>0){
        for(int i = 1;i<=p;i++){
            res = res * n;
        }
        printf("%d",res);
    }
}