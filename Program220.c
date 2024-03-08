
//write a program which takes the file name from user and open thta file 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard file
#include<fcntl.h> //File Control has the file function calls ie.O_RDONLY,O_WRONLY

int main()
{
   
   char FileName[30];
   int fd = 0;

   printf("Enter the name of file that you want to open from the current directory..\n");
   scanf("%s",FileName);

   fd = open(FileName,O_RDWR);

   if(fd == -1)
   {
    printf("Unable to open the %s file\n",FileName);
   }
   else
   {
    printf("%s file gets succesfully opened with file discriptor %d\n",FileName,fd);
    close(fd);
   }

    return 0;
}