#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str, sizeof(str) , stdin);
    int length = strlen(str);
    if(length > 0 && str[length-1] == '\n'){
        length--;
    }
    printf("%d",length);
    return 0;
}