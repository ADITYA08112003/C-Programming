#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    /*Program to print numbers from 1 to 10 using a do-while loop*/
    int i=1;
    do{
        printf("%d ",i);
        i+=1;
    }while(i<=10);
    printf("\n");
    // Part2
    printf("Part2\n");
    // Body of do while loop will be executed atleast once
    int j=11;
    do{
        printf("%d\n",j);
        j+=1;
    }while(j<=10);
    return 0;
}