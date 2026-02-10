#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str) , stdin);
    int len = strlen(str);
    int space = 1;
    for(int i = 0;i < len;i++){
        if(str[i] == ' '){
            space = space + 1;
        }
    }
    printf("%d",space);
    return 0;
}