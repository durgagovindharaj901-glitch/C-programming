#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);   
    int i = 0;
    int successful = 0;
    int cancelled = 0;
    while(i < n){
        int order;
        scanf("%d", &order);
        if(order == 1){
            successful++;
        }else if(order == 0){
            cancelled++;
        }
        i++;
    }
    printf("Successful: %d\n", successful);
    printf("Cancelled: %d", cancelled);
    if(cancelled > successful){
        printf("Status: Risk\n");
    }else{
        printf("Status: Safe\n");
    }
    
    return 0;
}