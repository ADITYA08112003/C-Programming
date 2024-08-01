#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    // string are zero length or more length
    printf(" \n");
    printf("aditya\n");
    printf("abc\\sde\n");
    printf("abc\"shit\n");
    printf("abc""shit\n");
    char s1[]={'a','d','i','\0'};
    char s2[]="adi";
    char s3[10]="adi";
    printf("%s,%s,%s",s1,s2,s3);//s1==s2==s3
    // Part2
    printf("\nPart2\n");
    /*Program to print characters of a string and address of each character*/
    char str[]="GATE";
    int i;
    for(i=0;str[i]!='\0';i++){
        printf("Character=%c\t",str[i]);
        printf("Address=%p\n",&str[i]);
    }
    // Part3
    printf("\nPart3\n");
    /*Input and output strings using scanf() and printf()*/ 
    char name[40];
    printf("Enter a name: ");
    scanf("%s",name);
    printf("%s %s\n",name,"Course");
    return 0;
}