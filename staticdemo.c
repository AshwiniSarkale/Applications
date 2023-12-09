#include<stdio.h>

void Fun()
{
    int i = 10;
    i++;
    printf("Value of i : %d\n",i);
}

int main()
{
    Fun();
    Fun();
    Fun();

    return 0;
}