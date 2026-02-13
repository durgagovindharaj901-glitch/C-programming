#include<stdio.h>
int main(){
    char str[100];
    fgets(str , sizeof(str) , stdin);
    char str1[100];
    char *p = str;
    char *p1 = str1;
    while(*p !='\0'){
        *p1 = *p;
        p++;
        p1++;
    }
    *p1 = '\0';
    printf("%s",str);
    return 0;
}