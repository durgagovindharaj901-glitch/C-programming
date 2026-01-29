#include <stdio.h>
int main() {
    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= 11; j++) {
            if (i == 1 || i == 9){
                printf("*");
            }else if ((i == 2 && (j <= 4 || j >= 8)) ||(i == 3 && (j <= 3 || j >= 9)) ||(i == 4 && (j <= 2 || j >= 10))){
                printf("*");
            }else if (i == 5 && (j == 2 || j == 10)){
                printf("*");
            }else if ((i == 6 && (j <= 2 || j >= 10)) ||(i == 7 && (j <= 3 || j >= 9)) ||(i == 8 && (j <= 4 || j >= 8))){
                printf("*");
            }else
                printf(" ");
            }
            printf("\n");
    }
    return 0;
}