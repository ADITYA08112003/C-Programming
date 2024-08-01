#include<stdio.h>

void fun1(void);
void fun2(void);
void fun(void);
int a,b=6;
int main(){
    // Part1
    printf("Part1\n");
    /*Program to understand the use of global variables*/
    printf("Inside main(): a=%d,b=%d\n",a,b);
    fun1();
    fun2();
    // Part2
    printf("Part2\n");
    /*Program to understand the use of static variables*/
    fun();
    fun();
    fun();
    return 0;
}
void fun1(void){
    printf("Inside fun1(): a=%d,b=%d\n",a,b);
}
void fun2(void){
    int a=8;
    printf("Inside fun2(): a=%d,b=%d\n",a,b);
}
void fun(void){
    int a=10;
    static int b=10;
    printf("a=%d,b=%d\n",a,b);
    a++;
    b++;
}
