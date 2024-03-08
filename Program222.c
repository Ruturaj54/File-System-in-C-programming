
//write a program which takes the file name from user and create thta file 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard file
#include<fcntl.h> //File Control has the file function calls ie.O_RDONLY,O_WRONLY

int main()
{
   
   char FileName[30];

   printf("Enter the name of file that you want to create into the current directory..\n");
   scanf("%s",FileName);

   unlink(FileName);

    return 0;
}