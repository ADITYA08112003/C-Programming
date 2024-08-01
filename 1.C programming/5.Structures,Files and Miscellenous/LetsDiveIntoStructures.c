#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int rollno;
    int marks;
};
void print(char name[],int rollno,int marks);
void print1(struct student);
void print2(struct student *);
void inc_marks(struct student *);
void print3(struct student);
struct student change(struct student stu);
void print4(struct student *);
struct student *func(struct student *p1,struct student *p2);
void print5(struct student);
void dec_marks(struct student stuarr[]);
int main(){
    // Part1
    printf("\nPart1\n");
    /*Program to understand pointers to structures*/
    struct student stu1={"satish",25,65};
    struct student *ptr=&stu1;
    printf("Name: %s\t",ptr->name);
    printf("RollNo: %d\t",ptr->rollno);
    printf("Marks: %d\n",ptr->marks);
    // Part2
    printf("\nPart2\n");
    /*Program to understand how structure members are sent to a function */
    struct student s1={"Aditya",19,123};
    struct student s2;
    strcpy(s2.name,"Shitanshu");
    s2.rollno=1;
    s2.marks=98;
    print(s1.name,s1.rollno,s1.marks);
    print(s2.name,s2.rollno,s2.marks); 
    // Part3
    printf("\nPart3\n");
    /*Program to understand how a structure variable is sent to a function*/
    struct student a1={"Amrit",10,1000};
    struct student a2={"Shivam",20,2000};
    print1(a1);
    print1(a2);
    // Part4
    printf("\nPart4\n");
    /*Program to understand how a pointer to structure variable is sent to a function */
    struct student s11={"Adi",23,234};
    struct student s12={"Shi",12,334};
    inc_marks(&s11);
    inc_marks(&s12);
    print2(&s11);
    print2(&s12);
    // Part5
    printf("\nPart5\n");
    /*Program to understand how a structure variable is returned from a function*/
    struct student d1={"Aditya Raj",87,90};
    struct student d2={"Shitanshu Shekhar",29,95};
    d1=change(d1);
    d2=change(d2);
    print3(d1);
    print3(d2);
    // Part6
    printf("\nPart6\n");
    /*Program to understand how a pointer to structure is returned from a function*/
    struct student *stuptr;
    struct student a11={"Ashi",12,98};
    struct student a12={"Shi",32,97};
    stuptr=func(&a11,&a12);
    print4(stuptr);
    // Part7
    printf("\nPart7\n");
    /*Program to understand how an array of structures is sent to a function*/
    struct student stuarr[3]={{"Aditya",23,97},{"Shitanshu",43,85},{"Shivam",45,65}};
    dec_marks(stuarr);
    for(int k=0;k<3;k++){
        print5(stuarr[k]);
    }
    return 0;
}
void print(char name[],int rollno,int marks){
    printf("Name: %s\t",name);
    printf("RollNo: %d\t",rollno);
    printf("Marks: %d\n",marks);
}
void print1(struct student stu){
    printf("Name: %s\t",stu.name);
    printf("RollNo: %d\t",stu.rollno);
    printf("Marks: %d\n",stu.marks);
}
void inc_marks(struct student *p){
    (p->marks)++;
}
void print2(struct student *ptr){
    printf("Name: %s\t",ptr->name);
    printf("RollNo: %d\t",ptr->rollno);
    printf("Marks: %d\n",ptr->marks);
}
struct student change(struct student stu){
    stu.marks+=5;
    stu.rollno-=10;
    return stu;
}
void print3(struct student s1){
    printf("Name: %s\t",s1.name);
    printf("RollNo: %d\t",s1.rollno);
    printf("Marks: %d\n",s1.marks);
}
struct student *func(struct student *p1,struct student *p2){
    if(p1->marks > p2->marks){
        return p1;
    }
    else{
        return p2;
    }
}
void print4(struct student *p){
    printf("Name: %s\t",p->name);
    printf("RollNo: %d\t",p->rollno);
    printf("Marks: %d\n",p->marks);
}
void dec_marks(struct student stuarr[]){
    for(int w=0;w<3;w++){
        stuarr[w].marks-=10;
    }
}
void print5(struct student stu){
    printf("Name: %s\t",stu.name);
    printf("RollNo: %d\t",stu.rollno);
    printf("Marks: %d\n",stu.marks);
}