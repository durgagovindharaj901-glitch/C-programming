#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<size;i++){
        if(arr[i]!=0){
            arr[i]=arr[i-1];
        }else{
            arr[i] = 0;
        }
        arr[i]++;
        
    }
    printf("%d",arr);
}