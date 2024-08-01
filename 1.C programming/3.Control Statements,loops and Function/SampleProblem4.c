#include<stdio.h>
int main(){
    char inchar='A';
    switch(inchar){
        case 'A':
            printf("Choice A\n");
        case 'B':
            printf("Choice B ");
        case 'C':
        case 'D':
        case 'E':
        default:
            printf("No Choice");
    }
}