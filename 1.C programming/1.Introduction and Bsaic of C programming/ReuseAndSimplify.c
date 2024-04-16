// Program 6
#include<stdio.h>
int isPrime(int a){
    int i;
    for(i=2;i<a-1;i++){
        if(a%i==0){
            return(0);
        }
    }
    return 1;
}

void main(){
    int a,a_p;
    printf("Enter the Number:");
    scanf("%d",&a);
    a_p=isPrime(a);
    if(a_p==1){
        printf("%d is Prime Number",a);
    }
    else{
        printf("%d is Not Prime Number",a);
    }
}