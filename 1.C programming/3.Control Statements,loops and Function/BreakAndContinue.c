#include<stdio.h>
#include<math.h>
int main(){
    // Part1
    printf("Part1\n");
    // Break KeyWords
    /*Program to find whether a number is prime or not*/
    int i,n;
    printf("Enter a Number :");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            break;
    if(i>sqrt(n))
        printf("%d is prime\n",n);
    else   
        printf("%d is not prime\n",n);

    // Part2
    printf("Part2\n");
    // Continue Keywords
    /* Program to find the sum and average of 5 positive integers*/
   int i1=1,n1,sum=0;
   float avg;
   printf("Enter 5 positive Number: \n");
   while(i1<=5){
    printf("Enter Number %d : ",i1);
    scanf("%d",&n1);
    if(n1<0){
        printf("Enter Only Positive Numbers\n");
        continue;
    }
    sum+=n1;
    i1++;
   }
   avg=sum/10.0;
    printf("Sum=%d Avg=%f\n",sum,avg);
    return 0;
}