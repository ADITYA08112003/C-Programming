#include<stdio.h>
#include<math.h>

int sum(int x,int y);//Function Declaration
int sum(int x,int y){//Function definition
    int s=x+y;
    return s;
}
void selection(int age,float ht){
    if(age>20){
        printf("Age should be less than 20\n");
        return;
    }
    if(ht<5){
        printf("Height should be more than 5\n");
        return;
    }
    printf("Selected\n");
}

int main(){
    // Part1
    printf("Part1\n");
    /*Program to find the square root of a number*/
    double n,s;
    printf("Enter a number : ");
    scanf("%lf",&n);
    s=sqrt(n);
    printf("Square root of %.2lf is %.2lf\n",n,s);
    // Part2
    printf("Part2\n");
    /*Program to find the sum of two numbers*/
    int a,b,s1;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);
    s1=sum(a,b);//Function Call
    printf("Sum of %d and %d is %d\n",a,b,s1);
    // Part3
    printf("Part3\n");
    /*Program to understand the use of return statement*/
    int age;
    float ht;
    printf("Enter age and height: ");
    scanf("%d %f",&age,&ht);
    selection(age,ht);
    return 0;
}