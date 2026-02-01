#include<stdio.h>
int main(){
    int n , capacity;
    scanf("%d\n%d",&n,&capacity);
    int i = 0;
    int count = 0;
    int cri_hr =0;
    while(i<n){
        int hour;
        scanf("%d",&hour);  
        if(capacity>n && capacity >0){
            count = count+n;
        }else{
        cri_hr = cri_hr+2;
       }
       i++;
    }
    printf("Final occupied Beds:%d\n",count);
    printf("Critical hours :%d",&cri_hr);
    return 0;

}