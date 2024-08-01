#include<stdio.h>
int exp(int x,int y){
    int res=1,a=x,b=y;
    while(b!=0){
        if(b%2==0){
            a=a*a;
            b=b/2;
        }
        else{
            res=res*a;
            b=b-1;
        }
    }
    return res;
}
int main(){
    // The Following Function Computes x^y for positive Integers x and y.
    int x,y;
    printf("Enter the two Positive Integer:\n ");
    scanf("%d %d",&x,&y);

    printf("%d",exp(x,y));
}