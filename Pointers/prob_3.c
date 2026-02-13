#include<stdio.h>
void vowel(char *c){
    int count = 0;

    for(int i = 0; c[i] !='\0';i++){
        if(c[i] == 'a'||c[i] == 'e'||c[i] == 'i'||c[i] == 'o'||c[i] == 'u'||
        c[i] == 'A'||c[i] == 'E'||c[i] == 'I'||c[i] == 'O'||c[i] == 'U'){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    char str[100];
    fgets(str , sizeof(str) , stdin);
    vowel(str);
    return 0;
}


