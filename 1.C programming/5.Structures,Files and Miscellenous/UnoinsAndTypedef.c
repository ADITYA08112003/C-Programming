#include<stdio.h>
struct stag{
    char c;
    int i;
    float f;
};
union utag{
    char c;
    int i;
    float f;
};
int main(){
    // Part1
    printf("\nPart1\n");
    /*Program for accessing union members */
    union result{
        int marks;
        char grade;
        float per;
    }res;
    res.marks=86;
    printf("Marks: %d\n",res.marks);
    res.grade='D';
    printf("Grade: %c\n",res.grade);
    // printf("Marks: %d\n",res.marks); garbage value
    res.per=67.34;
    printf("Per: %.2f\n",res.per);
    // printf("Marks: %d\n",res.marks);garbage value
    // Part2
    printf("\nPart2\n");
    /*Program to compare the memory allocated for a union and structure variable*/ 
    union utag uvar;
    struct stag svar;
    printf("Size of svar =%u\n",sizeof(svar));
    printf("Address of svar: %p\n",&svar);
    printf("Address of Members: %p %p %p\n",&svar.c,&svar.i,&svar.f);
    printf("Size of uvar=%u\n",sizeof(uvar));
    printf("Address of uvar: %p\n",&uvar);
    printf("Address of Members : %p %p %p\n",&uvar.c,&uvar.i,&uvar.f);
    // typedef 
    // struct student s1;
    // typedef struct student stu;
    // stu s1;//same as struct student s1
    // int a,b;
    // typedef int nu;
    // nu a,b;//same as int a,b;
    return 0;
}