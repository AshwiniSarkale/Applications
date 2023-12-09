#include<iostream>
using namespace std;

float  Calculate(float Marks, float outof = 100)
{
    float Percentage = ( (Marks / outof)* 100);
    return Percentage;
}

int main()
{ 
    float Ans = 0.0f;

    Ans = Calculate(86,100);
    cout<<"Percentage : "<<Ans<<"\n";

    Ans = Calculate(86);
    cout<<"Percentage : "<<Ans<<"\n";

    Ans = Calculate(320,400);
    cout<<"percentage : "<<Ans<<"\n";

    return 0;
}