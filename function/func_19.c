#include<stdio.h>
int power(int a, int b){
    int result = 1;
    for(int i = 1;i<=b;i++){
        result = result *a;
    }
    printf("%d",result);
    return 0;
}
int main(){
    int a , b;
    scanf("%d\n%d",&a,&b);
    power(a,b);
    return 0;

}