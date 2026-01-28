#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev = 0;
    for(;n!=0;){ // 123 != 0 T
        int id = n % 10; // 123 % 10 = 3
        rev = (rev*10)+id; // rev = 0*10 +3=3
        n = n/10;// n = 123/10=12
    }      
        printf("%d",rev);
}