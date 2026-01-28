#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp = n;
    int rev = 0;
    for(; n!=0;){
        int id = n%10;
        rev = (rev*10)+id;
        n = n/10;
    }
    if(rev == temp){
        printf("YES");
    }else{
        printf("NO");
    }
}
