
//To read the data from the file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard file
#include<fcntl.h> //File Control has the file function calls ie.O_RDONLY,O_WRONLY


int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[50] = {'\0'};

    fd = open("Marvellousx.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        iRet = read(fd,Arr,22); 
        printf("%d bytes gets sucessfully read from the file \n",iRet);

        printf("%s\n",Arr);
        close(fd);
    }

    return 0;
}