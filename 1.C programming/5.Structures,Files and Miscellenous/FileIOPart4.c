#include<stdio.h>
#include<stdlib.h>
int main(){
    //Part4
    printf("Part4\n");
    /*Program to understand the use of fputs()*/
    FILE *fptr;
    char str[80];
    if((fptr=fopen("test3","w"))==NULL){
        printf("Error in opening file\n");
        exit(1);
    }
    printf("Enter the text\n");
    printf("To stop entering ,press Ctrl+d / Ctrl+z \n");
    while(gets(str)!=NULL){
        fputs(str,fptr);
    }
    fclose(fptr);

    return 0;
}