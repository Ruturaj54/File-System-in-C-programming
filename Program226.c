//Write a program which reads only 10 byte data 

//In this we have to read all the data from the file
//problem is the file bytes are not known to 
//if data is 10 then array will be of 10 but if file is 15crore bytes then array cant be created

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard file
#include<fcntl.h> //File Control has the file function calls ie.O_RDONLY,O_WRONLY
#include<string.h>

int main()
{
   
   char FileName[30];
   char Arr[100] = {'\0'};
   char Brr[100] = {'\0'};
   int fd = 0,iRet = 0;


   printf("Enter the name of file that you want to Read data in it\n");
   scanf("%s",FileName);

   fd = open(FileName,O_RDWR);

   if(fd == -1)
   {
    printf("Unable to open the %s file\n",FileName);
   }
   else
   {
    printf("%s file gets succesfully opened with file discriptor %d\n",FileName,fd);

    while(iRet != 0)
    {
        iRet = read(fd,Arr,10);
        printf("%s\n",Arr);
    }

    printf("%d bytes gets read successfully from the file\n",iRet);
    printf("The data that you want to Read From the file is : %s\n",Arr);

    /*iRet = read(fd,Arr,10);

    printf("%d bytes gets read successfully from the file\n",iRet);
    printf("The data that you want to Read From the file is : %s\n",Arr);
    */
    close(fd);
   }

    return 0;
}