#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p =arr;
    for(int i = 0; i<n;i++){
        scanf("%d",p+i);
    }
    int rev = 0;
    int *q = p;
    int *q1 = p+n;
        while(q<q1){
        int num = *q;
        int temp = 0;
        while(num > 0)
        temp = num % 10;
        rev = (rev*10) + temp;
        num = num/10;
    }
    printf("%d",rev);
    return 0;
}