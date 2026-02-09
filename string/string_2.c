#include <stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str , sizeof(str) , stdin);
    int max = 0;
    int second = -1;
    int count = 0;
    for(int i = 0; str[i] != '\0';i++){
        if(str[i] > max){
            second = max;
            max = str[i];
        }
        else if(str[i] > second && str[i] < max){
            second = str[i];
        }
    }
    if(second != -1){
        printf("%c",second);
    }
    return 0;
}
