// Program 5
#include<stdio.h>
#include<stdlib.h>

void main(){
    int a;
    int i;
    printf("Enter the Number:");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++){
        if(a%2==0){
            printf("Not Prime Number,Divisible By %d",i);
            exit(0);
        }
    }
    printf("Prime Number");
}