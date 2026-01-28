#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int lcm;
    for (lcm = (a > b ? a : b); ; lcm++) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("%d", lcm);
            break;
        }
    }
    return 0;
}
