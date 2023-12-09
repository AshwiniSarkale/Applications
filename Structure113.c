#include<stdio.h>

union Demo
{
    int i;
    char ch;
    float f;
    double d;
    
};

int main()
{
    union Demo obj;

    printf("size of object is : %d\n", sizeof(obj));

    return 0;
}