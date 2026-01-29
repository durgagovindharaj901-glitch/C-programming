#include <stdio.h>
int main() {
    int n = 4;
    for( int i = 1; i <= 7; i++) {
        for(int j = 1; j <= 7; j++) {
            if (i == 1 || i == 7 || j == 1 || j == 7)
                printf("4 ");
            else if (i == 2 || i == 6 || j == 2 || j == 6)
                printf("3 ");
            else if (i == 3 || i == 5 || j == 3 || j == 5)
                printf("2 ");
            else
                printf("1 ");
        }
        printf("\n");
    }

    return 0;
}