#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str , sizeof(str) , stdin);
    int length = 0 , digit =0;
    for(int i = 0;str[i] != 0;i++){
        if(str[i] == '\0'){
            continue;
        }
        length++;

        if(str[i] >= '0' && str[i] <= '9'){
            digit = 1;
        }
        if(length == 8 && digit == 1){
            printf("The password is strong");
        }
    }
    return 0;
}