#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int smallest = 9;
    int count = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]>0 && arr[i]<smallest){
            smallest = arr[i];
        }else{
            count++;
        }
    }
    if(count == size){
        printf("No positive");
    }else{
        printf("%d",count);
    }
    return 0;
}