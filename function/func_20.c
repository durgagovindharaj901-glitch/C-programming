#include<stdio.h>
int calci(int a,int b, char op){
    switch(op){
        case '+':
          printf("%d",a+b);
          break;
        case '-':
          printf("%d",a-b);
          break;
        case '*':
          printf("%d",a*b);
          break;
        case '/':
            if (b != 0){
                printf("%d", a / b);
            }else{
                printf("Division by zero error");
            }break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
int main(){
    int a , b ;
    char op;
    scanf("%d\n%d\n%c",&a,&b ,&op);
    calci(a,b,op);
    return 0;
}