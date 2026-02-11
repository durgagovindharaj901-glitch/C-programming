#include<stdio.h>
 void palindrome(int n){
    int rev = 0;
    int temp = n;
    for(;n!=0;){
        int id = n%10;
        rev = (rev *10)+id;
        n = n/10;
    }
    if(rev == temp){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
 }
int main(){
    int n;
    scanf("%d",&n);
    palindrome(n);
    return 0;
}