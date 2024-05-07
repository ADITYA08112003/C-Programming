// Problem 10
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter x,y and z Number::");
    scanf("%d%d%d",&x,&y,&z);
    int a=(x>y)?((x>z)?x:z):((y>z)?y:z);//nested ternary operator
    printf("%d",a);
}