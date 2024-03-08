
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard file
#include<fcntl.h> //has the file function calls ie.O_RDONLY,O_WRONLY

int main()
{
    int fd = 0;

    fd = open("Program211.c",O_RDONLY); //fd = open(File_name,Mode);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd : %d\n",fd);
        close(fd);
        printf("File gets Succesfully closed..");
    }

    return 0;
}