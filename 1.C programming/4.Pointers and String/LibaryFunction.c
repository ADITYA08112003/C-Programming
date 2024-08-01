#include<stdio.h>
#include<string.h>

unsigned int astrlen(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    // Part1
    printf("Part1\n");
    /*without strlen() function*/
    char str[50];
    printf("Enter a String: ");
    gets(str);
    printf("Length of String is: %u\n",astrlen(str));
    // Part2
    printf("\nPart2\n");
    /*strlen() function*/
    char str1[50];
    printf("Enter a String: ");
    gets(str1);
    printf("Length of String is: %u\n",strlen(str));
    // Part3
    printf("\nPart3\n");
    /* Program to understand the work of strcmp() function */
    char str2[10],str3[10];
    printf("Enter the two String: ");
    gets(str2);
    gets(str3);
    if((strcmp(str2,str3))==0){
        printf("String are Same\n");
    }
    else{
        printf("String are not Same\n");
    }
    // Part4
    printf("\nPart4\n");
    /*strcpy() function */
    char str4[10],str5[10];
    printf("Enter a String: ");
    scanf("%s",str4);
    strcpy(str5,str4);
    printf("First String :%s \t\t Second String :%s\n",str4,str5);
    strcpy(str4,"Aditya");
    strcpy(str5,"Shitanshu");
    printf("First String :%s \t\t Second String :%s\n",str4,str5);
    // Part5
    printf("\nPart5\n");
     /*strcat() function */
    char str6[10],str7[10];
    printf("Enter Two String: ");
    gets(str6);
    gets(str7);
    strcat(str6,str7);
    printf("First String :%s \t\t Second String :%s\n",str6,str7);
    strcat(str6," Thank You");
    printf("Now the First String  is:%s\n",str6);
    // Part6
    printf("\nPart6\n");
     /*strncpy() function */
    char str8[10];
    strncpy(str8,"AppliedGateCourse",6);
    printf("%s\n",str8);
    str8[6]='\0';
    strncpy(str8,"gate",6);
    printf("%s\n",str8);
    // Part7
    printf("\nPart7\n");
 /*strncat() function */
    char str9[15]="GATE";
    strncat(str9,"APPLIEDGATECOURSE",6);
    printf("%s\n",str9);
    // Prt8
    printf("\nPart8\n");
     /*strstr() function */
     char *ptr;
     ptr=strstr("GateApplied Course","Applied");
     printf("%s\n",ptr);
    //  Part9
    printf("\nPart9\n");
     /*strtok() function */
     char st[]="...why?but;not?oh!, where	when";
     char step[]="?!;,. \t";
     char *t;
     t=strtok(st,step);
     while(t!=NULL){
        printf("%s\t",t);
        t=strtok(NULL,step);
     }
    //  Part10
    printf("\nPart10\n");
    /*Program to convert integer and float values to strings using sprintf() function*/
    char s1[10];
    char s2[10];
    int x=1000;
    float y=120.23;
    sprintf(s1,"%d",x);
    sprintf(s2,"%.2f",y);
    printf("s1=%s,s2=%s\n",s1,s2);
    // Part11
    printf("\nPart11\n");
    /*Program to convert strings to integer and float values*/
    char a1[100]="10000";
    char a2[100]="1234.244";
    int x1;
    float y1;
    sscanf(a1,"%d",&x1);
    sscanf(a2,"%f",&y1);
    printf("Value of x1=%d,Value of y1=%.2f\n",x1,y1);

    return 0;
}