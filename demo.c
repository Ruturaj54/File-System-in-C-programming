#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;

    fd = creat("Marvellousx.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to create the file... \n");
    }
    else
    {
        printf("Created the file sucessfully with fd :%d\n",fd);
    }

    return 0;
}