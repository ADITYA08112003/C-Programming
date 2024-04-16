// Program 4
#include<stdio.h>
void main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n%3==0){
        printf("Remainder is 0");
    }
    else if(n%3==1){
        printf("Remainder is 1");
    }
    else{
        printf("Remainder is 2");
    }
}