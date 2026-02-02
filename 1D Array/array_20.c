#include<stdio.h>
int main(){
    int size;
    scanf("%d",size);
    int arr[size];
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<size;i++){
        if(arr[i]<0){
            int arr = 0;
        }else{
            int arr = arr;  
        }
    }
    printf("%d",arr);
}