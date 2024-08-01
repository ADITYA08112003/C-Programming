#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    int *p[10];//Creating Integer Pointer array of size 10
    int (*p1)[10];//Pointer to an Integer array (1D) of size of 10
    // Part2
    printf("Part2\n");
    /*Array of pointers*/
    int *pa[3];
    int i,a=5,b=10,c=15;
    pa[0]=&a,pa[1]=&b,pa[2]=&c;
    for(i=0;i<3;i++){
        printf("pa[%d]=%p\t",i,pa[i]);
        printf("pa[%d]=%d\n",i,*pa[i]);
    }
    // Part3
    printf("Part3\n");
    int a1[3][4]={{10,11,12,13},
                 {20,21,22,23},
                 {30,31,32,33}
                 };
    int *p0[3];
    p0[0]=a1[0];
    p0[1]=a1[1];
    p0[2]=a1[2];
    for(int k=0;k<3;k++){
        for(int l=0;l<4;l++){
            printf("&a1[%d][%d]=%p ,a1[%d][%d]=%d=%p \n",k,l,*(p0[k]+l),k,l,a1[k][l],(*(p0[k]+l)));
        }
        printf("\n");
    }
    // Part4
    printf("Part4\n");
    /*Dereferencing a void pointer*/
    int u=3;
    float e=3.4,*fp=&e;
    void *vp;
    vp=&u;
    printf("Value of u=%d\n",*(int *)vp);
    *(int *)vp=12;
    printf("Value of u=%d\n",*(int *)vp);
    vp=fp;
    printf("Value of b=%f\n",*(float *)vp);
    return 0;
}