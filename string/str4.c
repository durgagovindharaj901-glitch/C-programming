#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str , sizeof(str) , stdin);
    for(int i = 0; str[i] != '\0';i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
    int j = 0;
    while(str[j] != '\0'){
        j++;
    }
    for(int i = j-1;i>=0;i--){
        printf("%c",str[i]);
    }
    
    return 0;
}