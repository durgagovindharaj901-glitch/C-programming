#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 0;
    int max = 0;;
    int surge = 0;
    while(i<n){
        int power;
        scanf("%d\n",&power);
        if(i>max){
            if(max > 5){
                max = max + i;
                surge = max - 5;
            }
        }
        i++;
    }
    printf("Max Usage :%d\n",max);
    printf("Surge Hours: %d",surge);
    return 0;
}