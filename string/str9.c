#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str , sizeof(str), stdin);
    for(int i =0 ; str[i]!= '\0' ;i++){
        str[i] = str[i]-32;
        printf("%c",str[i]);
    }
    
    return 0;
}