#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str , sizeof(str) , stdin);
    int i = 0;
    if(str[i] >= 'A' && str[i] <= 'Z'){
            printf("valid");
        }else{
            printf("invalid");
        }
    return 0;
}