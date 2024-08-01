#include<stdio.h>
int main(){
    int i;
    i=10;
    printf("\n%u\n",&i);//u=%p Pointer and &i=address of Variable i
    int *pint;//pointer variable of Integer types
    float *pf;//pointer variable of float types
    int *p,x=20;
    p=&x;//assignment 
    printf("%d , %d",x,*p);
    printf("\n%u",p);

    float f=10;
    p=&f;//Not Complie error but wrong output;
    printf("%d,%u,%f",*p,p,f);
    
    int *pin=p;//Assign pointer to another pointer
    int *a;
    a=NULL;//zero ,constant present in stdio.h


}