#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    ptr = (int *)realloc(iSize , sizeof(int));
    ptr = (int *)recalloc(NULL,24);
    ptr = (int *)recalloc(ptr,0);

    ptr[0] = 10;
    ptr[1] = 11;
    ptr[2] = 12;

    free(ptr);

    return 0;
}
