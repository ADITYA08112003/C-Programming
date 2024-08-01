#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    /*Program to find whether a number is even or odd*/
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n%2==0)
        goto even;
    else
        goto odd;
    even:
        printf("Number is even\n");
        goto end;
    odd:
        printf("Number is odd\n");
        goto end;
    end:
    printf("\n");
    return 0;

}