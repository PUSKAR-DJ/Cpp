//Function overloading
#include<bits/stdc++.h>
using namespace std;
class Numerical
{
    public:
    void func(int x)
    {
        cout<<"The sumation of x is: "<<x++<<endl;
    }
    void func(double y)
    {
        cout<<"The sumation of y is: "<<y+y<<endl;
    }
    void func(int x, double y)
    {
        cout<<"The sumation of integers and double is: "<<x+y<<endl;
    }
    void func(double x, int y)
    {
        cout<<"The sumation of double and integer is: "<<x+y<<endl;
    }
};

int main()
{
    Numerical obj;
    obj.func(10);
    obj.func(10.588);
    obj.func(10.588,10);
    obj.func(10,10.558);
    return 0;
}