#include<stdio.h>
int main(){
    int size;
    int avg;
    scanf("%d",&size);
    int arr[size];
    int sum = 0;
    for(int i = 0;i<size-1;i++){
        scanf("%d ",&arr[i]);
        sum = sum+arr[i];
    }
    avg = sum/size;
    int count = 0 ;
    for(int i=0;i<size-1;i++){
        if(avg < arr[i]){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}