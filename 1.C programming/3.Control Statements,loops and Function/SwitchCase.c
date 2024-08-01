#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    /*Program to perform arithmetic calculations on integers*/
    char op;
    int a,b;
    printf("Enter Operator\n");
    scanf("%s",&op);
    printf("Enter two Number: ");
    scanf("%d %d",&a,&b);

    switch(op){
        case '+':
            printf("Result=%d\n",a+b);
            break;
        case '-':
            printf("Result=%d\n",a-b);
            break;
        case '*':
            printf("Result=%d\n",a*b);
            break;
        case '/':
            printf("Result=%d\n",a/b);
            break;
        case '%':
            printf("result=%d\n",a%b);
            break;
        default:
            printf("Enter valid  Operator\n");
    }//End of switch
}//End of Main()