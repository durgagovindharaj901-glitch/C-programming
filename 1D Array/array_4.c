#include<stdio.h>
int main(){
    int n , first = 0, second = n-1;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(first < second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
        first++;
        second--;
    }
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}