#include<stdio.h>
int main(){
    int n , max_weight;
    scanf("%d \n %d",&n, &max_weight);
    int count = 0;
    int i = 0;
    while(i<n){
        int pass_weight;
        scanf("%d",&pass_weight);
        count++;
        printf("Passengers Allowed : %d\n",count);
        if(pass_weight>max_weight){
            printf("Overload : Yes");
        }else{
            printf("Overload : No");
        }
    }
    return 0;
}