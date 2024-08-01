#include<stdio.h>

void displaymenu();
int fun();
void type(float a,float b,float c);
void area(float a,float b,float c);
int main(){
    // Part1
    printf("Part1\n");
    /*Program that uses a function with no arguments and no return values*/
    int c;
    displaymenu();
    printf("Enter your Choice : ");
    scanf("%d",&c);
    // Part2
    printf("Part2\n");
     /*Program that uses a function with no arguments but return values*/
     printf("%d\n",func());
    //  Part3
    printf("Part3\n");
     /*Program that uses a function with arguments but no return values*/
     float x,y,z;
     printf("Enter the Side of Traingle :");
     scanf("%f%f%f",&x,&y,&z);
     if(x<y+z && y<x+z && z<x+y){
        type(x,y,z);
        area(x,y,z);
     }
     else{
        printf("No Triangle possible with these sides\n");
     }
    //  Part4
    printf("Part4\n");
    float f(int a);//Function declarationn within another function
    float f1=f(10);
    printf("%f",f1);
    int i=g();// integer return type function not declared at all.
    printf("\n%d",i);
    // Part5
    printf("Part5\n");
    /*Program to find the sum of digits of any number*/
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("Sum of digits of %d is %d\n",n,Sum(num));




    return 0;
}
void displaymenu(){
    printf("1.Create database\n ");
    printf("2.Insert new record\n");
    printf("3.Modify a Record\n");
    printf("4.Delete a Record\n");
    printf("5.Display all Record\n");
    printf("6.Exit\n");
}
/*Returns the sum of squares of all odd numbers from 1 to 10*/
int func(){
    int i,s=0;
    for(i=1;i<=10;i++){
        if(i%2!=0){
            s+=i*i;
        }
    }
    return s;
}
void type(float a,float b,float c){
    if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (c*c)+(a*a)==(b*b)){
        printf("Right angled Triangle\n");
    }
    else if(a==b && b==c){
        printf("Equilateral Triangle\n");
    }
    else if(a==b || b==c || c==a){
        printf("Isosceles Triangle\n");
    }
    else{
        printf("Scalene Triangle\n");
    }
}
void area(float a,float b,float c){
    float s,are;
    s=(a+b+c)/2;
    are=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Traingle = %f\n",are);
}
float f(int a){
    return 1.0;
}
int g(){
    return 1;
}
int Sum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;/*Skip the last digit of number*/
    }
    return sum;
}