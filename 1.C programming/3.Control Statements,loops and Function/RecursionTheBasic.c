#include<stdio.h>
// iterative method
int factorial(int n){
    if(n==0){
        return 1;
    }
    int val=1;
    for(int i=1;i<=n;i++){
        val*=i;
    }
    return val;
}
// Recursive method
int fact(int n){
    if(n==0){//base / termination case
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
// Recursive Fibonacci Number
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    // Part1
    printf("Part1\n");
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    // Part2
    printf("\nPart2\n");
    printf("Factorial of %d is %d",n,fact(n));
    // Part3
    printf("\nPart3\n");
    printf("Fibonacci of %d terms is %d",n,fib(n));
}