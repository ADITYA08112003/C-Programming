#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5
#define LEN 10
int main(){
    // Part1
    printf("Part1\n");
    // String pointer
    char *str;
    str=(char *)malloc(10);
    printf("Enter a String: ");
    scanf("%s",str);
    printf("String is :%s\n",str);
    // Part2
    printf("\nPart2\n");
    /*Program to print the strings of the two-dimensional character array*/
    char arr[N][LEN]={"White","Red","Green","Yellow","Blue"};
    int i;
    for(i=0;i<N;i++){
        printf("String =%s\t",arr[i]);
        printf("Address of String=%p\n",arr[i]);
    }
    // Part3
    printf("\nPart3\n");
    int j;
    char *arr1[]={"White","Red","Green","Yellow","Blue"};
    for(j=0;j<5;j++){
        printf("String : %s\n",arr1[j]);
        printf("Address of String : %p\n",arr1[j]);
        printf("Address of String is Stored at : %p\n",arr1+j);
        printf("\n");
    }

    return 0;
}
