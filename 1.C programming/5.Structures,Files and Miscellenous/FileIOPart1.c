#include<stdio.h>
#include<stdlib.h>
int main(){
    // Part1
    printf("Part1\n");
    /*Program to understand the use of fputc() function*/
    FILE *fptr;
    int ch;
    if((fptr=fopen("test","w"))==NULL){
        printf("File does not exist\n");
        exit(1);
    }
    printf("Enter the text:\n");
    /*Press Ctrl+z in DOS and Ctrl+d in Unix to stop reading characters */
    while((ch=getchar())!=EOF){
        fputc(ch,fptr);
    }
    fclose(fptr);
    
    return 0;
}
