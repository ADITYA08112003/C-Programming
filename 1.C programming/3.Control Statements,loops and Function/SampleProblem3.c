#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int d=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                d++;
            }
        }
    }
    printf("\n%d",d);// this is the one-sixth of the product of 3-Consecutive Integers n.
}