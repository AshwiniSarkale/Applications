#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Primary School Portal\n");
    printf("Enter your devision : \n");
    scanf("%d",&Standard);

    if(Standard == 1)
    {
        printf("your exam is at 1 PM\n");
    }
    else if (Standard == 2)
    {
        printf("your exam is at 2 PM\n");
    }
    else if (Standard == 3)
    {
        printf("your exam is at 3 PM\n");
    }
    else if (Standard == 4)
    {
        printf("your exam is at 4 PM\n");
    }
     else 
     {
        if("invalid standard\n");
     }

    return 0;
}