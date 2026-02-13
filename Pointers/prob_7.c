#include<stdio.h>
int main(){
    char str[200];
    scanf("%s",&str);
    char *p = str;
    int palindrome = 1;
    while(*p != '\0'){
        for(int i = 0;i<*p/2;i++){
            if(str[i]== str[-1-i]){
                palindrome = 0;
                break;
            }
        }
    }
    if(palindrome == 1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}