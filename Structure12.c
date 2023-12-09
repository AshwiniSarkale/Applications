#include<stdio.h>

struct Demo
{
    int i;
    char ch;
    char ch1;
    char ch2;
    char ch3;
    float f;
    int no;
    double d;
    int no1;
};

int main()
{
    struct Demo obj;

    printf("size of object is : %d\n", sizeof(obj));

    return 0;
}