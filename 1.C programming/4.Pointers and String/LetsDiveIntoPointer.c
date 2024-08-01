#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    int x=10;
    int *pin=&x;
    printf("%p",pin);
    pin++;//address of x+1*sizeof(variable type size)
    printf("\n%p\n",pin);
    float f=1.0;
    float *pf=&f;
    printf("%p\n",pf);
    pf++;
    printf("%p\n",pf);
    pf=pf+5;
    printf("%p\n",pf);
    // Part2
    printf("Part2\n");
    /*Pointer arithmetic*/
    int a=5,*pi=&a;
    char b='x',*pc=&b;
    float c=5.5,*pa=&c;
    printf("Value of pi=Address of a=%p\n",pi);
    printf("Value of pc=Address of b=%p\n",pc);
    printf("Value of pa=Address of c=%p\n",pa);
    pi++;
    pc++;
    pa++;
    printf("Now value of pi=%p\n",pi);
    printf("Now value of pc=%p\n",pc);
    printf("Now value of pa=%p\n",pa);
    // Part3
    printf("Part3\n");
    int y;
    x=10,y=12;
    int *ptr=&x;
    printf("%d , %p\n",x,ptr);
    x=*ptr++;//*(ptr++)
    printf("%d , %p\n",x,ptr);
    x=++*ptr;//++(*ptr)
    printf("%d, %p\n",x,ptr);
    x=(*ptr)++;
    printf("%d, %p\n",x,ptr);
    x=++*ptr;//++(*ptr)
    printf("%d , %p\n",x,ptr);
    // Part4
    printf("Part4\n");
    int x1=100;
    int *p1=&x;
    int *p2=&x;
    printf("%d\n",p1==p2);
    int *a1=NULL;
    float *f1=NULL;
    printf("%d\n",a1==f1);
    // Part5
    printf("Part5\n");
    int x11=100;
    int *p0=&x11;
    int **pp0=&p0;
    printf("%d, %d ,%d\n",x11,*p0,**pp0);
    printf("%p, %p, %p\n",&x11,p0,*pp0);
    // Part6
    printf("Part6\n");
    int q=5;
    int *pq=&q;
    int **ppq=&pq;
    printf("Address of q=%p\n",&q);
    printf("Value of pq=Address of a=%p\n",pq);
    printf("Value of *pq=Value of q=%d\n",*pq);
    printf("Address of pq=%p\n",&pq);
    printf("Value of ppq=Address of pq=%p\n",ppq);
    printf("Value of *ppq=Value of pq=%p\n",*ppq);
    printf("Value of **ppa=Value of q=%d\n",**ppq);
    printf("Address of ppq=%p\n",&ppq);


    return 0;
}