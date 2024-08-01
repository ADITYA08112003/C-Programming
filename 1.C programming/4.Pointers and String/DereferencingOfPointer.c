#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    int x=100;
    int *p=&x;//value stored at address of x
    printf("%d , %d",x,*p);
    (*p)++;//x++
    printf("\n%d , %d\n",x,*p);
    scanf("%d",p);//&x
    printf("%d , %d\n",x,*p);
    *(&x)=10;//x
    printf("Sizeof(*p)=%d, Sizeof(p)=%d",sizeof(*p),sizeof(p));
    // Part2
    printf("\nPart2\n");
    /*Dereferencing pointer variables*/
    int a=87;
    float b=4.5;
    int *p1=&a;
    float *p2=&b;
    printf("Value of p1=Address of a=%p\n",p1);
    printf("Value of p2=Address of b=%p\n",p2);
    printf("Address of p1=%p\n",&p1);
    printf("Address of p2=%p\n",&p2);
    printf("Value of a= %d %d %d\n",a,*p1,*(&a));
    printf("Value of b= %.1f %.1f %.1f\n",b,*p2,*(&b));
    return 0;
}