#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp = n;
    int sum = 0;
    int fact = 1;
    for(int i =1;i <n;i++){
        if(n%i==0){
            sum = sum + i;
    }}       
    if(sum == temp){
        printf("Yes");
    }else{
        printf("No");
    }
    
}