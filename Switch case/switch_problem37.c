#include<stdio.h>
int main(){
    int courseType;
    scanf("%d",&courseType);

    switch(courseType){
        case 1:
           printf("Certification Fee 0");
           break;
        case 2:
           printf("Certification Fee 500");
           break;
    }
}