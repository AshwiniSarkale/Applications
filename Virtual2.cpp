#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()
        {
            cout<<"Inside base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int a,b;
        void Gun()
        {
            cout<<"Inside derived gun\n";
        }
};
   
int main()
{
    Base *bp1 = new Base;      // no casting
    Derived *dp1 = new Derived; // No casting
    Base *bp2 = new Derived;    // Up casting
    // Derived *dp2 = new Base;  // Down cating

    return 0;
}