#include<stdio.h>

void Fun_Value()
{}
void Fun_Address()
{}
void Fun_Reference()
{}

int main()
{
    int i = 10, j = 10, k = 10;

    Fun_Value(i);
    Fun_Address(&j);
    Fun_Reference(k);

    return 0;
}