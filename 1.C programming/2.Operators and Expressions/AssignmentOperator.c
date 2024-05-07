// Program 3
#include<stdio.h>

int main(){
    int x,y,z,t;
    x=5;
    y=6;
    z=x+y*2;
    t=x;
    printf("\n x=%d,y=%d,z=%d,t=%d",x,y,z,t);
    x=y=z=10;//x=10 y=10 z=10
    x=x+5;//x=10+5=15
    x+=5;//x=15+5=20
    y*=5;
    z/=2;
    x%=5;
    printf("\n x=%d,y=%d,z=%d,t=%d",x,y,z,t);
    return 0;
}