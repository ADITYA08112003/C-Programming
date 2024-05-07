// Program 7
#include<stdio.h>
int main(){
    int a=40,b=20;
    int c=20,d=30;
    if(a>b && a!=0){
        printf("&& Operator:Both Conditions are true\n");
    }
    if(c>d || d!=20){
        printf("|| Operator:Only One Condition are true\n");
    }
    if(!(a>b && a!=0)){
        printf("! Operator:Both Condition are true\n");
    }
    else{
        printf("! Operator:Both Condition are true,But Status is inverted as false");
    }

    if(a && b){
        printf("\n a && b");//a!=0 means true a==0 means false
    }
    if(a && 0){
        printf("\n a && 0");
    }
    if(a || 0){
        printf("\n a || 0");
    }
    return 0;
}