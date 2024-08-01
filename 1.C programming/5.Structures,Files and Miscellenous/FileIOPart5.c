#include<stdio.h>
#include<stdlib.h>
int main(){
    // Part5
    printf("Part5\n");
    /*Program to understand the use of  fgets() */
    FILE *fptr;
    char str[80];
    if((fptr=fopen("test","r"))==NULL){
        printf("Error i n opening file\n");
        exit(1);
    }
    while(fgets(str,80,fptr)!=NULL){
        puts(str);
    }
    fclose(fptr);
    return 0;
}