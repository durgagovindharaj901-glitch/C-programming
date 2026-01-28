#include<stdio.h>
int main(){
    int bookType , daysLate , fee;
    scanf("%d %d",&bookType , &daysLate);

    switch(bookType){
        case 1:
           fee = daysLate * 2;
           printf("Late Fee %d",fee);
           break;
        case 2:
           fee = daysLate * 5;
           printf("Late Fee %d",fee);
           break;
        
    }
}