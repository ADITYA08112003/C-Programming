#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    // Nested For Loop
    int i,j;
    // Outer For Loop
    for(i=1;i<=5;i++){
        // Inner For Loop
        for(j=1;j<=3;j++){
            printf("i=%d j=%d\t",i,j);
        }
        printf("\n");
    }
    // Part2 
    printf("Part2");
    // Infinite Loop

    // for( ; ; ){  body executed }
    // while(1){ boby executed  }
    // do{ body code }while(1);
    
    /* infinite loop
    float f=2.0;
    while(f!=3.0){
        printf("%f",f);
        f+=.2;
    }*/
//    Not infinite loop
    printf("\n");
    float f=2.0;
    while(f<3.0){
        printf("%f\t",f);
        f+=.2;
    }
}