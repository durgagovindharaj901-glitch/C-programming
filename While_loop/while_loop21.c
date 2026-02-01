#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 0;
    int count = 0;
    int streak;
    while(i<n){
        int vehi_cnt;
        scanf("%d",&vehi_cnt);
        if(vehi_cnt > 20){
            count++;
        }else{
            count = 0;        
        }
        i++;
    }
    printf("Congestion Minutes:%d\n",count);
    return 0;

}