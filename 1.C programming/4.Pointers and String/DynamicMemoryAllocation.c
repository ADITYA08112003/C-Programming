#include<stdio.h>
#include<stdlib.h>
int main(){
    // Part1
    printf("Part1\n");
    /*Program to understand dynamic allocation of memory*/
    int *p,n,i;
    printf("Enter the number of Integers to be entered: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory not available\n");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Enter an Integer : ");
        scanf("%d",p+i);   
    }
    for(i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
    // Part2
    printf("\nPart2\n");
    int j,*ptr;
    ptr=(int *)malloc(5*sizeof(int));
    if(ptr==NULL){
        printf("Memory Not available\n");
        exit(1);
    }
    for(j=0;j<5;j++){
        *(ptr+j)=j*2;
    }
    ptr=(int *)realloc(ptr,9*sizeof(int));/*Allocate memory for 4 more integers*/
    if(ptr==NULL){
        printf("Memory Not available\n");
        exit(1);
    }
    for(j=5;j<9;j++){
        *(ptr+j)=j*10;
    }
    for(j=0;j<9;j++){
        printf("%d ",*(ptr+j));
    }

    return 0;
}