#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str , sizeof(str) , stdin);
    int length = 0;
    for(int i= 0;str[i] != '\0';i++){
        for(int j = 0; j< i;j++){
            if(str[i] == str[i]){
                length = 1;
                break;
            }
        }
        if(length == 0){
            length++;
        }
    }
    printf("%d",length);
    return 0;
}
