#include<stdio.h>
int main(){
    int Mode;
    char ch;
    scanf("%d\n%c",&Mode,&ch);

    switch(Mode){
        case 1:
            if(ch == 'R' || ch == 'r'){
                printf("5000");
            }else if(ch == 'S' || ch == 's'){
                printf("3000");
            }
            break;
        case 2:
            if(ch == 'R' || ch == 'r'){
                printf("9000");
            }else if(ch == 'S' || ch == 's'){
                printf("7000");
            }
            break;
    }
}
