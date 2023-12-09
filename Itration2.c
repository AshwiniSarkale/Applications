#include<stdio.h>

int main()
{
    int i = 0;
    int Count = 0;

    printf("Enter number of times you want to display Jay Ganesh on screen\n");
    scanf("%d",&Count);

    for(i = 1; i <= Count; i++)
    {
        printf("Jay Ganesh...\n");
    }

    return 0;
}