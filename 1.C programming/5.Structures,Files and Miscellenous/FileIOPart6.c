#include<stdio.h>
#include<stdlib.h>
int main(){
    // Part6
    printf("Part6\n");
    /*Program to understand the use of fprintf()*/
    FILE *fp;
    char name[10];
    int id;
    if((fp=fopen("test","w"))==NULL){
        printf("Error in opening file\n");
        exit(1);
    }
    printf("Enter your name and id :");
    scanf("%s%d",name,&id);
    fprintf(fp,"My name is %s and id is %d ",name,id);
    fclose(fp);
    return 0;
}