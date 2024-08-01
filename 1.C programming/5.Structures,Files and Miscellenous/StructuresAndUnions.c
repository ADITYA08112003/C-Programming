#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int rollno;
    float marks;
};//}s1,s2,s3;
//}s1={"aditya",4,23.23};//initialization of variable of s1 of type struct student 

struct student1{
    char name[20];
    int rollno;
    int submarks[4];
};
int main(){
    // Part1
    printf("Part1\n");
    struct student s1;//declare the struct student s1
    struct student s2={"Shitanshu",10,100.21};//intialisation of s2 of struct student type
    struct student s3={"Amrit"};//rno and marks are initial to zero
    // Part2
    printf("\nPart2\n");
    /*Program to print the values of structure members*/
    struct student stu1={"satish",25,68.2};
    struct student stu2,stu3;
    strcpy(stu2.name,"Naveen");
    stu2.rollno=12;
    stu2.marks=23.42;
    printf("Enter name,rollno and marks for stu3: ");
    scanf("%s %d %f",stu3.name,&stu3.rollno,&stu3.marks);
    printf("Stu1: %s %d %.2f\n",stu1.name,stu1.rollno,stu1.marks);
    printf("stu2: %s %d %.2f\n",stu2.name,stu2.rollno,stu2.marks);
    printf("stu3: %s %d %.2f\n",stu3.name,stu3.rollno,stu3.marks);
    // Part3
    printf("\nPart3\n");
    /*Program to assign a structure variable to another structure variable*/
    struct student a1={"Aditya",88,293.23};
    struct student a2;
    a2=a1;
    printf("a1: %s %d %.2f\n",a1.name,a1.rollno,a1.marks);
    printf("a2: %s %d %.2f\n",a2.name,a2.rollno,a2.marks);
    // Part4
    printf("\nPart4\n");
    /*Array of structures*/
    struct student sarr[3];
    for(int i=0;i<3;i++){
        printf("Enter name ,rollno,marks: \n");
        scanf("%s %d %f",sarr[i].name,&sarr[i].rollno,&sarr[i].marks);
    }
    for(int j=0;j<3;j++){
        printf("sarr[%d] detail = %s %d %.2f\n",j,sarr[j].name,sarr[j].rollno,sarr[j].marks);
    }
    // Part5
    printf("\nPart5\n");
    /*Program to understand arrays within structures*/
    struct student1 arr[3];
    for(int i=0;i<3;i++){
        printf("Enter data for student %d\n",i+1);
        printf("Enter name: ");
        scanf("%s",arr[i].name);
        printf("Enter RollNo: ");
        scanf("%d",&arr[i].rollno);
        for(int j=0;j<4;j++){
            printf("Enter marks for subject %d : ",j+1);
            scanf("%d",&arr[i].submarks[j]);
        }
    }
    for(int i=0;i<3;i++){
        printf("Information of Student %d\n",i+1);
        printf("Name: %s \n RollNo: %d \n Marks: ",arr[i].name,arr[i].rollno);
        for(int j=0;j<4;j++){
            printf("%d ",arr[i].submarks[j]);
        }
        printf("\n");
    }
    


}