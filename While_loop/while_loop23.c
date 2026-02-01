#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 0;
    int count = 0;
    int cons_high = 0;
    int break_read = -1;
    while(i<n){
        int vib;
        scanf("%d",&vib);
        if(vib>70){
            count++;
            cons_high++;
        }
        if(cons_high == 3 && break_read == -1) {
            break_read = i;
            }
            i++;
        }
    printf("Breakdown at Reading:%d\n",break_read);
    printf("unsafe Readings:%d",count);
}