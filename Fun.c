#include<stdio.h>

void Display(int temp)
{
    printf("Inside Display Function...\n%d", temp);
}

int main()
{
    printf("Inside main Function...\n");
   
    Display(5);     

    return 0;
 }