#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str , sizeof(str) , stdin);
    char ch;
    scanf("%c",&ch);
    int index = -1;
    for(int i = 0; str[i] != '\0';i++){
        if(str[i] == ch){
            index = i;
            break;
        }
    }   
    printf("%d",index);
    return 0;
}