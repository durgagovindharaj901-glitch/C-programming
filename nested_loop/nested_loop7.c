 #include<stdio.h.>
 int main(){
    for(int i = 1;i <=4;i++){ //i=1 1<4 T i=i+1 2<4 T
        for(int k =1;k<=4-i;k++){ // k=1 k<=3 T this loop run upto it will trerminate and then move next
            printf(" "); //print it
        } // after k loop terminate move to to j loop
        for(int j =1;j <2*i;j++){ // j=1 1<2*1 T
            printf("*");  // print *
        }
        printf("\n"); // go to next  line
    }
    return 0;
 }