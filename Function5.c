#include<stdio.h>

int Multiplication(int No1 , int No2)
{
    int Sum = 0;

    Sum = No1 * No2;

    return Sum;
}

int main()
{  
    int Value1 = 10;
    int Value2 = 11;
    int Ans = 0;

    Ans = Multiplication(Value1 , Value2);

    printf("Multiplication is : %d\n",Ans);
    
    return 0;     
}