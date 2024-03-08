
//write a program which opens the file as per user and writes the data in it file 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard file
#include<fcntl.h> //File Control has the file function calls ie.O_RDONLY,O_WRONLY
#include<string.h>

int main()
{
   
   char FileName[30];
   char Arr[100] = {'\0'};
   int fd = 0,iRet = 0;


   printf("Enter the name of file that you want to write data in it\n");
   scanf("%s",FileName);

   fd = open(FileName,O_RDWR | O_APPEND);

   if(fd == -1)
   {
    printf("Unable to open the %s file\n",FileName);
   }
   else
   {
    printf("%s file gets succesfully opened with file discriptor %d\n",FileName,fd);

    printf("Enter the data that you want to write into the file : \n");
    scanf(" %[^'\n']",Arr); //here we have added the space in scanf because data was not taken at first

   // while(Str != '\0')
   

    iRet = write(fd,Arr,strlen(Arr));

    printf("%d bytes gets written successfully into the file\n",iRet);

    close(fd);
   }

    return 0;
}