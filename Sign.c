#include<stdio.h>

int main()
{
     int i = 10;
     signed int j = 20;
     signed int k = -30;

     unsigned int a = 40;

     int x = 10;
     short int y = 10;
     long int z = 20;

     printf("%d\n",i);
     printf("%d\n",j);
     printf("%d\n",k);
     printf("%d\n",a);

     printf("Size of x is : %d", sizeof(x));
     printf("Size of y is : %d", sizeof(y));
     printf("Size of z is : %d", sizeof(z));

    return 0;
}