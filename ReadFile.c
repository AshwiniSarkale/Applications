#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    Ret = read(fd,Arr,10);  // (kashatun wachayaych, kashat wachaych, kiti wachaych)

    printf("%d bytes gets written in the file\n",Ret);
    printf("Data is : %s\n",Arr);

    close(fd);

    return 0;
}

// O_RDONLY : Read
// O_WRONLY : Write
// O_RDWR : Readd + Write