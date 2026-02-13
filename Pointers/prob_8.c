#include<stdio.h>
int main(){
    char str1[50];
    scanf("%d",&str1);
    char str2[50];
    char *p =str1;
    char *p1 = str2;
    int i = 0;
    int j = 0;
    while(*p!='\0'){
        i++;
    }
    while(*p1!='\0'){
        *p = *p1;
        i++;
        j++;
    }
    *p = '\0';
    printf("%s",str1);
    return 0;
}