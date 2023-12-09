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

    obj.f = 90.99;
    printf("%d\n",obj.f);

    return 0;
}