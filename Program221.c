
//write a program which takes the file name from user and create thta file 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard file
#include<fcntl.h> //File Control has the file function calls ie.O_RDONLY,O_WRONLY

int main()
{
   
   char FileName[30];
   int fd = 0;

   printf("Enter the name of file that you want to create into the current directory..\n");
   scanf("%s",FileName);

   fd = creat(FileName,0777);

   if(fd == -1)
   {
    printf("Unable to create the %s file\n",FileName);
   }
   else
   {
    printf("%s gets succesfully created with file discriptor %d\n",FileName,fd);
    close(fd);
   }

    return 0;
}