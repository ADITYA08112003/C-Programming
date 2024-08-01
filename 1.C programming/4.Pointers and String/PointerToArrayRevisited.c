#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    // Array of 1-D
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("a[%d]=%d or *(a+%d)=%d\n",i,a[i],i,*(a+i));
        printf("&a[%d]=%p or (a+%d)=%p\n",i,&a[i],i,(a+i));
        printf("\n");
    }
    // Part2
    printf("\nPart2\n");
    // Array of 2-D
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("arr[%d][%d]=%d or *(*(arr+%d)+%d)=%d\n",i,j,arr[i][j],i,j,*(*(arr+i)+j));
            printf("&arr[%d][%d]=%p or *(a+%d)+%d=%p\n",i,j,&arr[i][j],i,j,*(arr+i)+j);
            printf("\n");
        }
    }
    // Part3
    // Array of 3-D
    printf("\nPart3\n");
    int a1[3][4][2]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("%d\n",*(*(a1+2)-3)[2]);
    // Part4
    printf("\nPart4\n");
    // Array of 3-D
    char c[2][3][3]={'A','P','P','L','I','E','D',' ','C','O','U','P','S','E'};
    char (*p)[2][3][3]=&c;
    printf("%d\n",(*(*(*p)[0]+5))-(*(*(*p)[1]-3)));
    return 0;
}