// Program 4
#include<stdio.h>
int main(){
    int x=8;
    // Prefix Operator
    printf("x=%d\t",x);
    printf("x=%d\t",++x);//Prefix Increment
    printf("x=%d\t",x);
    printf("x=%d\t",--x);//Prefix Decrement
    printf("x=%d\t",x);
    printf("\n");
    // Postfix Operator
    int y=8;
    printf("y=%d\t",y);
    printf("y=%d\t",y++);//Postfix Increment
    printf("y=%d\t",y);
    printf("y=%d\t",y--);//Postfix Decrement
    printf("y=%d\t",y);
    return 0;
}