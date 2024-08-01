#include<stdio.h>
int main(){
    // Part1
    /*Program to print the bigger number*/
    printf("Part1\n");
    int a,b;
    printf("Enter the Number ::");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("Bigger Number=%d\n",a);
    else
        printf("Biggger Number=%d\n",b);
    
    // Part2
    /*Program to print a message if negative number is entered */
    printf("Part2\n");
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if(num<0){
        printf("Number is Negative\n");
        num=-num;
    }
    printf("Value of num:%d\n",num);
    // Part3
    /*Program to find whether a year is leap or not*/
    printf("Part3\n");
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
    if(year%100!=0){
        if(year%4==0){
            printf("Leap Year\n");
        }
        else{
            printf("Not Leap Year\n");
        }
    }
    else{
        if(year%400==0){
            printf("Leap Year\n");
        }
        else{
            printf("Not Leap Year\n");
        }
    }
    // Part4
    /*Program to find out the grade of a student when the marks of 4 subjects are given. 
The method of assigning grade is -
percentage>=85 						grade=A
percentage<85  and percentage>=70	grade=B
percentage<70  and percentage>=55	grade=C
percentage<55  and percentage>=40	grade=D
percentage<40						grade=E
*/
    float m1,m2,m3,m4,total,per;
    char grade;
    printf("Enter marks of 4 subjects:  ");
    scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
    total=m1+m2+m3+m4;

    per=total/4;
    if(per>=85)
        grade='A';
    else if(per>=70)
        grade='B';
    else if(per>=55)
        grade='C';
    else if(per>=40)
        grade='D';
    else 
        grade='E';
    printf("Percentage of %f,Grade is %c\n",per,grade);
    return 0;

}