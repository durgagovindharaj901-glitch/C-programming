#include<stdio.h>
int main(){
    int n , first = 0, second = n-1;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even =0,odd=0;
    for(int i = 0;i<n;i++){
        if(arr[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    printf("Working days:%d\n",even);
    printf("Holiday:%d\n",odd);
    return 0;
}