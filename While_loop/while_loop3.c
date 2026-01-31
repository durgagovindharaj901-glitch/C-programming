#include<stdio.h>
int main(){
    int days;
    int tot_data;
    scanf("%d\n%d",&days ,&tot_data);
    int i = 0;
    int used = 0;
    while(i<days && tot_data>0){
        int usage;
        scanf("%d",&usage);
        tot_data = tot_data - usage;
        used++;
        i++;
    }
    if(tot_data <0){
        tot_data = 0;
    }
    printf("Days Used : %d \n",used);
    printf("Remaining Data:%dGB",tot_data);
}