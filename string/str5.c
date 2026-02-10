#include <stdio.h>
int main() {
    char str[100]; int i, j, flag=1;
    scanf("%s", str);
    for(j=0; str[j]!='\0'; j++);
    for(i=0; i<j/2; i++)
        if(str[i]!=str[j-1-i]) flag=0;
    if(flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}