#include<stdio.h>
int f(){
    // return 1;
}
float fun(int a,int b);//Declaration of a func
float (*fp)(int a,int b);//fp is a pointer to function that take two int argument and return a float
float * fu(int a,int b);//fu is a function that take two int argument and return float pointer and not a function pointer


void f1(int x);
void f2(int x,void (*fp)(int z,int u));

float (*fq[4])(float, float);//declaration of arrays of function pointer
//fq is an array of function pointer  where each function has return type of float and has two argument of float
float add(float,float);
float sub(float,float);
float mul(flaot,float);
float div(float,float);

int main(){
    printf("%u",f());
    float a=fun(10,20);
    fp=fun;//address of function
    float b=(*fp)(10,20);
    // a=b because (*fp)(10,20)=fun(10,20)

    // pass a function address as an argument to another function
    fi(10,f2);

    // Arrays to function pointer
    fq[0]=add;
    fq[1]=sub;
    fq[2]=mul;
    fq[3]=div;
    return 0;
}