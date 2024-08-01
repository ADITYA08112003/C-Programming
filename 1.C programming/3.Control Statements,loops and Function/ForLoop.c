#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    /*Program to print numbers in reverse order with a difference of 2*/
    int k;
    for(k=10;k>=2;k-=2)
        printf("%d\t",k);
    printf("\n");
    // Part2
    printf("Part2\n");
    /* Find the sum of this series upto n terms 
  1 + 2 + 4 + 7 + 11 + 16 + ...*/
    int i,n,sum=0,term=1;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=term;
        term+=i;
    }
    printf("The Sum of Series Upto %d terms is %d\n",n,sum);
    // Part3
    printf("Part3\n");
    /*Program to generate fibonacci series
1, 1, 2, 3, 5, 8, 13, 34, 55, 89...................
In this series each number is a sum of the previous two numbers*/
    long x,y,z;
    int i1,n1;
    x=0,y=1;
    printf("Enter the Number of Terms: ");
    scanf("%d",&n1);
    printf("%ld ",y);
    for(i1=1;i1<n1;i1++){
        z=x+y;
        printf("%ld ",z);
        x=y;
        y=z;
    }
    printf("\n");
    // Part4
    printf("Part4\n");
    /*Program to show the use of comma operator in for loop*/
    int a1,b1;
    for(a1=0,b1=10;a1<=b1;a1++,b1--)
        printf("a1=%d b1=%d\n",a1,b1);
    return 0;
}