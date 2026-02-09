#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str , sizeof(str) , stdin);
    int unique = -1;
    for(int i = 0; str[i] != '\0';i++){
        if(str[i] != str[i+1]){
            unique = str[i];
            break;
        }
        else if(str[i] == str[i+1]){ 
            unique = -1;
        }
        i++;
    }
    printf("%c",unique);
    return 0;
}