#include<stdio.h>
int main(){
    int code , experience, bonus , BaseSalary;
    scanf("%d\n%d",&code,&experience);

    switch(code){
        case 1:
            BaseSalary = 50000;
            if(bonus >= 3){
            bonus = experience * 5000;
            }
            printf("Total salary:%d",BaseSalary + bonus);
            break;
        case 2:
            BaseSalary = 35000;
            if(bonus >= 3){
            bonus = experience * 5000;
            }
            printf("Total salary:%d",BaseSalary + bonus);
            break;
    }
}