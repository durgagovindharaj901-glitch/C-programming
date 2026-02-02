#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int current_streak = 1 , max_streak = 1;
    for(int i = 0; i<size;i++){
        if(arr[i]>arr[i-1]){
            current_streak++;
            max_streak = current_streak;
        }else{
            max_streak++;
            current_streak = 1;
        }
        printf("%d",max_streak);
    }  
    return 0;
}