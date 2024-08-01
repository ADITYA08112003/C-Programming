#include<stdio.h>
int main(){
    // Part1
    printf("Part1\n");
    /*Program to print the value and address of the elements of an array */
    int arr[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++){
        printf("Value of arr[%d]=%d\t",i,arr[i]);
        printf("Address of arr[%d]=%p\n",i,&arr[i]);
    }
    // Part2
    printf("Part2\n");
    /*Program to print the value and address of elements of an array using pointer notation*/
    int arr1[5]={5,10,15,20,25};
    int j;
    for(j=0;j<5;j++){
        printf("Value of arr1[%d]=%d\t",j,*(arr1+j));
        printf("Address of arr[%d]=%p\n",j,(arr1+j));
    }
    // Part3
    printf("Part3\n");
    /* Program to print the value of array elements using pointer and subscript notation */
    int arr2[5]={5,10,15,20,25};
    int k=0;
    for(k=0;k<5;k++){
        printf("Value of arr2[%d]=",k);
        printf("%d\t",arr2[k]);
        printf("%d\t",*(arr2+k));
        printf("%d\t",*(k+arr2));
        printf("%d\t",k[arr2]);
        printf("Address of arr[%d]=%p\n",k,&arr[k]);
    }
    // Part4
    printf("Part4\n");
    /*Program to understand difference between pointer to an integer and pointer to an array of integers*/
    int *w;/*Can point to an integer*/
    int (*wtr)[5];/*Can point to an array of 5 integers*/ 
    int a3[5];
    w=a3;/*Points to 0th element of arr*/
    wtr=&a3;	/*Points to the whole array arr*/
    printf("w=%p,wtr=%p\n",w,wtr);
    w++;
    wtr++;
    printf("w=%p,wtr=%p\n",w,wtr);
    return 0;
}