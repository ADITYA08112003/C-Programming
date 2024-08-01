#include<stdio.h>

void value(int x,int y);
void ref(int *p,int *q);
int main(){
    // Part1
    printf("Part1\n");
    /*Call by value*/
    int a=5,b=8;
    printf("a=%d,b=%d\n",a,b);
    value(a,b);
    printf("a=%d,b=%d\n",a,b);
    // Part2
    printf("Part2\n");
    /*Program to explain call by reference*/
    int a1=5,b1=8;
    printf("a1=%d,b1=%d\n",a1,b1);
    ref(&a1,&b1);
    printf("a1=%d,b1=%d\n",a1,b1);
    // Part3
    printf("Part3\n");
    // Function return Pointer
    // int *q;
    // q=f();
    // printf("%d,%p\n",*q,q);

    // Passing Array to Function
    int s[5]={1,2,3,4,5};
    printf("s[0]=%d\n",s[0]);
    f1(s);
    printf("s[0]=%d\n",s[0]);
    return 0;
}
// Passing 2D Arrays to a Function
    void f2(int a[3][4]){} //decalaration is true
    void f3(int a[][4]){}//declaration is also true
    // void f4(int a[][]){}//declaration is false
    void f4(int (*a)[4]){}//declaration is true
    void f5(int a[][4][3][9]){}//this is true for array declaration
void f1(int arr[]){//int arr[5] or int *arr
    arr[0]++;
}
// int *f(){
//     // Do Not Return Address of a Local Variable
//     int w1=100;
//     // return &w1;
// }
void value(int x,int y){
    x++;
    y++;
    printf("x=%d,y=%d\n",x,y);
}
void ref(int *p,int *q){
    (*p)++;
    (*q)++;
    printf("*p=%d,*q=%d\n",*p,*q);
}