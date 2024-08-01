#include<stdio.h>
int main(){
    // Part1
    /*Program to print numbers from 1 to 10 using while loop*/
    printf("Part1\n");
    int i=1;
    while(i<=10){
        printf("%d\t",i);
        i=i+1;/*Statement that changes the value of condition*/
    }
    printf("\n");
    // Part2
    printf("Part2\n");
    /*Program to print the sum of digits of any number*/
   int n, sum=0, rem;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;	/*taking last digit of n*/
		sum+=rem;
		n/=10;		/*skipping last digit of n*/
	}
	printf("Sum of digits=%d\n",sum);
    // Part3
    printf("Part3\n");
    /*Program to convert a binary number to a decimal number*/
    int n1,binary,rem1,d,j=1,dec=0;
    printf("Enter the Number In a Binary: ");
    scanf("%d",&n1);
    binary=n1;
    while(n1>0){
        rem1=n1%10;/*taking last digit of n*/
        d=rem1*j;
        dec+=d;
        j*=2;
        n1/=10;/*skipping last digit of n*/
    }
    printf("Binary Number= %d , Decimal Number= %d\n",binary,dec);
}