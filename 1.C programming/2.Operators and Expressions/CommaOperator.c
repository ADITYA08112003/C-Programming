// Program 8
#include<stdio.h>
int main(){
    int a,b,c,sum;
    // use of comma operator
    //sum=a+b+c; means return value of right most sub-expression
    sum=(a=18,b=10,c=28,a+b+c);
    printf("Sum=%d\n",sum);

    // interchange the value of two variables using comma operator
    int x=102,y=19,temp;
    printf("a=%d,b=%d\n",a,b);
    temp=a,a=b,b=temp;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}