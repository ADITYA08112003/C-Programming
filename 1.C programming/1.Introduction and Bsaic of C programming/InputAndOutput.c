// Program 10
// #include<stdio.h> is header file in c where printf and scanf are defined
#include<stdio.h>
void main(){
    char ch='a';
    char str[10]="abcdef";//str contains a abcdef and null value(\0) 
    float real=12.34;
    int number=100;
    double db1=12.345678;
// %d,%s,%c,%lf,%e,%o,%x
    printf("Charcter:%c\n",ch);//character value of ch is a
    printf("Character as Integer:%d\n",ch);//Integer value of Character value of 'a'
    printf("String:%s\n",str);
    printf("float:%f\n",real);
    printf("Double:%lf\n",db1);//%lf means long float
    printf("Scientific\(e\):%e\n",db1);//e=10^power
    printf("Scientific\(E\):%E\n",db1);//E=10^power
    printf("Integer:%d\n",number);
    printf("Octal:%o\n",number);//%o means octal value not consider 0 as formated in output
    printf("Hexadecimal:%x\n",number);//%x means hexadecimal value not  consider 0x formatted in output
    printf("Hexadecimal:%x\t String:%s\t Float:%f\n",number,str,real);

     
   // h: small => d, i, 0, u, x
   // l:large => f, e, g
   
   //Refer: https://linux.die.net/man/3/printf [Google: man page printf]

// Scanf()
   printf("Enter the number , real , str::");
   scanf("%d%f%s",&number,&real,&str);//Multiple input variable
   printf("%d\t%f\t%s",number,real,str);

    int day,month,year,age;
    printf("\nEnter day-month-year::");
    scanf("%d-%d-%d",&day,&month,&year);//formatted input :: value-value-value
    scanf("%d",&age);
    printf("%d\/%d\/%d",day,month,year);
    printf("\n age:%d",age);

}
