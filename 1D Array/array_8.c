#include<stdio.h>
int main(){
    int n , m;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d\n",m);
    for(int i = m;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i =0;i<m;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}