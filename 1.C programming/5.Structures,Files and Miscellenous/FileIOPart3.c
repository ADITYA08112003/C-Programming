#include<stdio.h>
#include<stdlib.h>
int main(){
    // Part3
    printf("Part3\n");
    /*Copy a file to another file*/

    FILE *sptr,*dptr;
    char ch;
    if((sptr=fopen("text1.txt","r"))==NULL){
        printf("Error in opening source file\n");
        exit(1);
    }
    if((dptr=fopen("text2.txt","w"))==NULL){
        printf("Error in opening destination file\n");
        exit(1);
    }
    while((ch=fgetc(sptr))!=EOF){
        fputc(ch,dptr);
    }
    fclose(sptr);
    fclose(dptr);
    return 0;
}