#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<size;i++){
        if(arr[i] == arr[size-1]){
        printf("Yes");
        break;
        }else{
            printf("No");
            break;
        }  
    }
    return 0;
}