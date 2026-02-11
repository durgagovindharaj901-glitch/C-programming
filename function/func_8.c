#include<stdio.h>

int rev_num(int n){
    int rev =0;
    for(;n!=0;){
        int temp = n%10;
        rev=(rev*10)+temp;
        n = n/10;
    }
    printf("%d",rev);
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    rev_num(n);
    return 0;
}