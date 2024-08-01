#include<stdio.h>
void Toh(int n,char src,char dest,char aux){
    if(n==1){
        printf("\n Move disk 1 from %c to %c ",src,dest);
        return;
    }
    Toh(n-1,src,aux,dest);
    printf("\n Move disk %d from %c to %c",n,src,dest);
    Toh(n-1,aux,dest,src);
}
int main(){
    int n;
    printf("Enter the Disks Number:");
    scanf("%d",&n);
    Toh(n,'A','C','B');
    return 0;
}