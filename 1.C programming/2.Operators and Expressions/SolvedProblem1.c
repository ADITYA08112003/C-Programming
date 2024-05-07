// Program 5
#include<stdio.h>
int main(){
    int m=10;
    int n,n1;
    n=++m;//m=11 then n=m=11
    n1=m++;//n1=m=11 then m=12
    n--;//n=10
    --n1;//n1=10
    n-=n1;//n=n-n1=10-10=0
    printf("Ans=%d",n);//Ans=0
    return 0;
}