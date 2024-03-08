
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//universal standard file
#include<fcntl.h> //File Control has the file function calls ie.O_RDONLY,O_WRONLY

int main()
{
    int fd = 0;

    fd = creat("Marvellousx.txt",0777); 

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File is successfully created with fd : %d\n",fd);
        
    }

    return 0;
}