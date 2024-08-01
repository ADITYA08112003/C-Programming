#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    
    // int a[3][4];//Declaration of 2D Arrays
    //Initialization of 2D Arrays
   int  a[3][4]={
			    {10,11,12,13}, 
				{20,21,22,23}, 
				{30,31,32,33}
	       };		
    printf("%d\n",a[0][3]);
    a[0][3]=12;
    printf("%d\n",a[0][3]);
    printf("%p, %p \n",a,*(a));//a is the pointer to the 0th row 1D Array of size of 4
    printf("%p, %p \n",(a+1),*(a+1));//1st row 1D Array
    printf("%p, %p \n",(a+2),*(a+2));//2nd row 1D Array
    printf("%p , %p \n",&a[1][2],*(a+1)+2);//*(a+i)+j=&a[i][j]
    printf("%d, %d\n",a[1][2],*(*(a+1)+2));//*(*(a+i)+j)=a[i][j]
    // Part2
    printf("Part2\n");
    /*Program to print the values and address of elements of a 2-D array*/
    int arr[3][4]={{10,11,12,13},
                    {20,21,22,23},
                    {30,31,32,33}
                    };
    int i,j;
    for(i=0;i<3;i++){
        printf("Address of %dth array=%p, %p\n",i,arr[i],*(arr+i));
        for(j=0;j<4;j++){
            printf("%d, %d",arr[i][j],*(*(arr+i)+j));
        }
        printf("\n");
    }
    return 0;
}