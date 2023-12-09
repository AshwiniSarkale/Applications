#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd != -1)
    {
        printf("File is successfully opened with Fd : %d\n",fd);
    }

    close(fd);

    return 0;
}

// O_RDONLY : Read
// O_WRONLY : Write
// O_RDWR : Readd + Write