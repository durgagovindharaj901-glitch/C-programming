#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    fgets(str,sizeof(str),stdin);
    char *p = str;
    int len = strlen(str);
    int space =1;
    for (int i = 0; i < len; i++){
        if(*p == ' '){
            space = space +1;
        }
        p++;
    }
    printf("%d",space);
    return 0;
}