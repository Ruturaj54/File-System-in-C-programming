//********************Code to write data from one file to anothere**************

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard file
#include<fcntl.h> //File Control has the file function calls ie.O_RDONLY,O_WRONLY
#include<string.h>
#define BUFFERSIZE 1024

int main()
{
    int fdread = 0,fdwrite = 0;
    char Buffer[BUFFERSIZE] = {'\0'};
    char FnameSrc[30];
    char FnameDest[30];
    int iRet = 0;

    printf("Enter the name of existing file : \n");
    scanf("%s",FnameSrc);

    printf("Enter the name of new file that you want to create: \n");
    scanf("%s",FnameDest);

    fdread = open(FnameSrc,O_RDONLY);
    if(fdread == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("Sucessfully opened the file..\n");
    }
    
    fdwrite = creat(FnameDest,0777);
    if(fdwrite == -1)
    {
        printf("Unable to create the file\n");
        return -1;
    }
    else
    {
        printf("Sucessfully created the file..\n");
    }

    while((iRet = read(fdread,Buffer,sizeof(Buffer))) != 0)
    {
        write(fdwrite,Buffer,iRet);
    }
    close(fdread);
    close(fdwrite);

    printf("File copied sucessfully......");
    
    return 0;
}