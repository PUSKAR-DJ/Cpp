//Use of a special header file.
#include<bits/stdc++.h> //h=header file, it includes all standard libraries
using namespace std;
class Number//class name defined
{
    public:
    void func(int x)//one integer variable taken
    {
        cout<<"The integer value of x is: "<<x<<endl;
    }
    void func(double x)//Function name same but double variable
    {
        cout<<"The double value of x is: "<<x<<endl;
    }
    void func(int x, int y)//Function name same but two integer variable
    {
        cout<<"The value of x and y is: "<<x<<","<<y<<endl;
    }
};

int main()
{
    Number obj;//Object Created of the Number class
    obj.func(10);//Calls integer parameter
    obj.func(10.558);//Calls double parameter
    obj.func(100,200);//Call both integer parameter
    return 0;
}