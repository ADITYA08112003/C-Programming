// Program 11
#include<stdio.h>

void main(){

    // Integer
    printf("Integer Formatting::\n");
    // %nd means in scanf() : at most n didgit excess 
    // %nd mens in printf() : at least n digit excess
    // Input formatting
    int n1,n2;
    scanf("%2d%3d",&n1,&n2);//%2d means at most two digit number excess and %3d means at most three digit number excess
    // Output formatting
    printf("%2d,%3d\n",n1,n2);//%2d means at least two digit number excess and %3d means at least three digit number excess

    // Floating Point Number
    printf("Floating Point Number::\n");
    // %n.mf where n=Minimum number of chars  
    // m = Maximum Number of digits after the decimal point
    // Input formatting
    float f1,f2;
    scanf("%3f%4.2f",&f1,&f2);
    // Output formatting
    printf("f1=%3.1f,f2=%3.4f",f1,f2);

    // String 
    // %n.mf where
    //  n=Minimum number of character  
    // m = Maximum Number of character 
    printf("String ::\n");
    char str[10];
    // Input Formatting
    scanf("%3s",str);
    char s1[10];
    scanf("%.3s",s1);
    // Output Formatting
    printf("%3s",str);
    printf("%.3f",s1);
    printf("%.3f","abdcef");

    // Suppression char  %*d means igonore the input and next input place for that output
    printf("Suppression char::\n");
    int a,b,c1;
    // don't take the second input 
    scanf("%d%*d%d\n",&a,&b,&c1);
    // c1 take random value
    printf("%d,%d,%d\n",a,b,c1);


    printf("getchar() and putchar()::\n");
    // scanf and printf used as getchar and putchar in character
    // getchar() and putchar() are available for character Input and Output
    char c;
    printf("Enter the Character::\n");
    c=getchar(); // same as scanf("%c",&c);
    printf("Enter the value we entered::\n");
    putchar(c);//print the output
}