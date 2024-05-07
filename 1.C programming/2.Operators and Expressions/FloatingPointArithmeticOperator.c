// Program 2
#include<stdio.h>

int main(){
    float a=13.4,b=3.2;
    printf("Sum=%.2f\n",a+b);
    printf("Difference=%.2f\n",a-b);
    printf("Product=%.2f\n",a*b);
    printf("Division=%.2f\n",a/b);

    // Mixed Mode Arithmetic
    int x=7,y=2;
    float z=2.0;
    printf("\n 7/2: %f",x/y);//int/int is an int but they give garbage value
    printf("\n 7/2:%d",x/y);
    printf("\n 7/2.0:%f",x/z);// (int/float) or (float/int) or (float/float) is a float
}