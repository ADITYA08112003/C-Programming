#include<stdio.h>
#include<stdlib.h>

int main(){
    // Part2
    printf("\nPart2\n");
    /*Program to understand the use of fgetc()*/
    FILE *p;
    char c;
    if((p=fopen("test","r"))==NULL){
        printf("Error in opening file\n");
        exit(1);
    }
    while((c=fgetc(p))!=EOF){
        printf("%c",c);
    }
    fclose(p);
    return 0;
}