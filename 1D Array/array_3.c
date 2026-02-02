#include<stdio.h>
int main(){
    int n , x=1;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] > arr[i+1]){
           x = 0;
        }
    }
    if(x == 1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}