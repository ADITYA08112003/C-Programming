#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[20];
    float marks;
}stu;
int main(){
    // Part7
    printf("Part7\n");
    /*Program to understand the use of fscanf()*/
    FILE *fp;
    if((fp=fopen("test","r"))==NULL){
        printf("Error in opening file\n");
        exit(1);
    }
    printf("NAME \t MARKS \n");
    while(fscanf(fp,"%s %f",stu.name,&stu.marks)!=EOF){
        printf("%s\t%f\n",stu.name,stu.marks);
    }
    fclose(fp);
    return 0;
}