// Program 3
#include<stdio.h>

void main(){
    int n;
    printf("Enter the Number: ");
    // &n address of n
    //  & mean ampersanl13
    // %d mean Integer
    scanf("%d",&n);
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}