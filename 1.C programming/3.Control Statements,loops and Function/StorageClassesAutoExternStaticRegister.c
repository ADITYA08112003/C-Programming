#include<stdio.h>
void func();
static int y=10;//Global static Variable
void f2(){
    int x=2;
    printf("x=%d , y=%d\n",x,y);
    x++;
    y++;
}
int main(){
    // Part1
    printf("Part1\n");
    /* Program to understand automatic variables*/
    func();
    func();
    func();
    // Part2
    printf("Part2\n");
    int i=10;
    {
        int i=200;
        printf("\nInside Block %d",i);
    }
    printf("\nOutside Block %d",i);

    // Part3
    printf("\nPart3\n");
    extern int k;
    k++;
    // Part4
    printf("Part4\n");
    f1();
    f1();
    f1();
    // Part5
    printf("Part5\n");
    f2();
    f2();
    f2();
    // Part6
    printf("Part6\n");
    /*P14. 8 Program to understand the use of register variable*/
    register int k;
    for(k=0;k<100;k++){
        printf("%d",k);
    }
    /*Register storage class can be applied only to local variables. The scope, lifetime and initial value of register
variables are same as that of automatic variables. The only difference between the two is in the place
where they are stored. Automatic variables are stored in memory while register variables are stored in
CPU registers.*/
    return 0;
}
// Part3
void V(){
    extern int k;
    k++;
}
int k=100;
void func(){
    int x=2,y=5;
    printf("x=%d , y=%d\n",x,y);
    x++;
    y++;
}
void f1(){
    static int x=2,y=5;//local static variables
    printf("x=%d,y=%d\n",x,y);
    x++;
    y++;
}