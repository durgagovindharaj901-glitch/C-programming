#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 0;
    int count=0;
    while(i<n){
        int streak;
        scanf("%d",&streak);
        if(streak == 1){
            count++;
        }
        i++;
    }
    printf("Longest Default streak : %d",count);
    return 0;
    
}