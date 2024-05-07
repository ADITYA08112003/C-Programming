// Program 6
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter Values for a and b::");
    scanf("%d%d",&a,&b);

    if(a<b){
        printf("%d is less than %d\n",a,b);
    }
    if(a<=b){
        printf("%d is less than or equal to %d\n",a,b);
    }
    if(a==b){
        printf("%d is equal to %d\n",a,b);
    }
    if(a!=b){
        printf("%d is not equal to %d\n",a,b);
    }
    if(a>b){
        printf("%d is greater than %d\n",a,b);
    }
    if(a>=b){
        printf("%d is greater than or equal to %d\n",a,b);
    }
    if(a=b){
        // value of expression is b and not 1 or 0
        printf("Assignment OPerator");
        printf("\n%d",a=b);
    }
    

    return 0;
}