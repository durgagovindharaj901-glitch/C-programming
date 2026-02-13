#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p = arr;
    for(int i = 0; i<n;i++){
        scanf("%d",p+i);
    }
    int found = -1;
    int index =-1;
    for(int i = 1;i<n;i++){
        if(*(p+i) == index){
            found =0;
        }
        if(found == 1){
            printf("%d",index);
        }
    }
    return 0;
    }
