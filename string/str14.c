#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str, sizeof(str),stdin);
    char str1[20];
    int i = 0;
    while(str[i] != '\0'){
        str1[i] = str[i];
        i++;
    }
    str1[i]='\0';
    printf("%s",str1);
}