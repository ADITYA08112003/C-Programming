#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("file\n","w");
    // THis is used in text

    // "w"=open file in write mode
    // "a"=append
    // "r"=read
    // "w+"=write + read (previous data erased)
    // "r+"=read+write (previous data is not erased and append)
    // "a+"=append+read

    // tHIS IS USED IN BINARY
    // "wb"=write in binary
    // "ab"=append mode in binary file
    // if(fp==null) then show error and no space on disk and no permission and doesnot exist file read/write mode

    // closing a file
    int fclose(FILE *fp);//all the file buffer has flushed return to disk
}