#include<stdio.h>
int main(){
    enum month {jan,feb,mar,apr,may,jun,jul};
    int m1,m2;
    m1=feb;
    m2=jun;
    printf("m1=%d,m2=%d\n",m1,m2);
    printf("jan=%d,feb=%d,mar=%d,apr=%d,may=%d,jun=%d,jul=%d",jan,feb,mar,apr,may,jun,jul);
    enum aditya{ad,di=11,ty,a=15};
    printf("\nad=%d,di=%d,ty=%d,a=%d",ad,di,ty,a);
    // printf("%s",jan) incorret
    printf("\n%d",jan);
    int jan=29;
    return 0;
}