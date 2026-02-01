#include<stdio.h>
int main(){
    int max_capa , n;
    scanf("%d\n%d",&n,&max_capa);
    int i = 0;
    int count = 0;
    int sum = 0;
    while(i<n){
        int hours;
        scanf("%d",&hours);
        sum++;
        if(hours <= max_capa){
            count = sum + hours;
        }
        i++;
    }
    printf("Treated Patients:%d",count);
    printf("Rejected Patients : %d",sum);
}