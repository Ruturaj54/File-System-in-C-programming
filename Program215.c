
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard file
#include<fcntl.h> //File Control has the file function calls ie.O_RDONLY,O_WRONLY

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Logic Building with Industrial Project Development";

    fd = open("Marvellousx.txt",O_RDWR); 

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iRet = write(fd,Arr,14); 
        printf("%d bytes gets sucessfully written into the file \n",iRet);
        close(fd);
    }

    return 0;
}